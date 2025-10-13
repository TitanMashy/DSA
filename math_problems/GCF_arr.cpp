#include <bits/stdc++.h>
using namespace std;

int gcd_arr(vector<int>v){
    sort(v.begin(), v.end());
    int a = v[0];
    int b = v.back();
    
    while(a>0 && b>0){
        if(a<b){
            b = b%a;
        }
        else{
            a = a%b;
        }
    }
    if(a==0){
        return b;
    }
    return a;

}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];      
    }
    int result = gcd_arr(v);
    cout<<result;
    return 0;
}