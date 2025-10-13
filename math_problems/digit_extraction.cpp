#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt=0;
    while(n>0){
        int last_digit=n%10;
        if(last_digit != 0){
            cnt++;
        }
        // cout<<last_digit<<endl;
        n=n/10;
        // cout<<n<<endl;
    }
    cout<<cnt;
    return 0;
}