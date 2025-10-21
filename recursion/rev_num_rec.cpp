#include <bits/stdc++.h>
using namespace std;

int revNum(int n, int rev=0){
    return (n==0) ? rev : revNum(n/10, rev * 10 + (n%10));
    // if(n==0) return rev;
    // rev = rev * 10 + (n%10); 
    // return revNum(n/10, rev);
}

int main() {
  int n; cin>>n;
  cout<<revNum(n);
  return 0;
}