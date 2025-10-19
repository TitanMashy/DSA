#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    int i=0;
    int cnt=0;
    while(i*i<n){
        if(n%i == 0){
            cnt++;
            if(i != n/i){
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