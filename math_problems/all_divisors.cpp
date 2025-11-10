#include <bits/stdc++.h>
using namespace std;

vector<int>ans(int num){
    vector<int>ans;
    int i = 0;
    // 2 * 2 = 4 <= 12
    // 3 * 3 = 9 <= 12
    // faster than sqrt/
    while (i*i<=num) //optimized soln --> sqrt
    {
        if(num%i == 0){ // 6 % 6
            ans.push_back(i);
            if(i != num/i){ // 6 != 36/6
                //check for duplicate factors
                ans.push_back(num/i); 
            }
        }
        i++;
    }
    sort(ans.begin(), ans.end()); //optional
    return ans;
}

int main() {
    int n;
    cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> v[i];      
    // }
    vector<int>a = ans(n);
    for(int i : a){
        cout<<i<<" ";
    }
    return 0;
}