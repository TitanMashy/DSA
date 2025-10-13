#include <bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n)
{
    int ans = 0;
    int original = n;
    while (n != 0)
    {
        int last_digit = n % 10;
        int cube = last_digit * last_digit * last_digit;
        ans += cube;
        n = n / 10;
    }
    return (ans==original);
}

int main() {
    int n;
    cin>>n;
    bool result = armstrongNumber(n);
    cout<<result;
    return 0;
}