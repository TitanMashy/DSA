#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if (n <= 1) return false;
    int i=1;
    int cnt=0;
    while(i*i<n){
        if(n%i == 0){ //11 % 1
            cnt++;
            if(i != n/i){ // 1 != 11
                cnt++;
            }
        }
        i++;
    }
    return (cnt == 2) ? true : false; 
}

int main() {
    int n;
    cin>>n;
    bool result = is_prime(n);
    cout<<result;
    return 0;
}