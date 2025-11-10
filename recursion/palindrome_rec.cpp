#include <bits/stdc++.h>
using namespace std;

bool is_drom(string str, int start, int end)
{
    if (start < end)
    {
        if (!isalnum(str[start]))
        {
            // Skip non-alphanumeric from the left
            return is_drom(str, start + 1, end);
        }
        else if (!isalnum(str[end]))
        {
            // Skip non-alphanumeric from the right
            return is_drom(str, start, end - 1);
        }
        else if (tolower(str[start]) != tolower(str[end]))
        {
            // Characters don't match
            return false;
        }
        else
        {
            // Continue inward
            return is_drom(str, start + 1, end - 1);
        }
    }
    else
    {
        // Base case: all characters matched
        return true;
    }
}

bool isPalindrome(string s)
{
    int n = s.size();
    return is_drom(s, 0, n - 1);
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