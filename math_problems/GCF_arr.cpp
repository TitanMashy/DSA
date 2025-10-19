#include <bits/stdc++.h>
using namespace std;

int MyGcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return (a == 0) ? b : a;
}
int gcd(vector<int> arr)
{
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        ans = MyGcd(ans, arr[i]);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int result = gcd(v);
    cout << result;
    return 0;
}