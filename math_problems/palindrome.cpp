#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
        if (n < 0) {
            return false;
        }
        long long ans = 0;
        long long original = n;
        while (n != 0) {
            int last_digit = n % 10;
            ans = ans * 10 + last_digit;
            n = n / 10;
        }
        return (ans == original) ? true : false;
    }

int main() {
    int n;
    cin>>n;
    bool result = isPalindrome(n);
    cout<<result;

    return 0;
}