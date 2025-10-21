#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int i = 0)
{
    if(i>=str.length()/2) return true;

    if(str[i] != str[str.length()-i-1]) return false;

    return isPalindrome(str, i+1);
}

int main()
{
    string str;
    cin >> str;
    int n = str.size();
    bool result = isPalindrome(str);
    cout << result;
    return 0;
}