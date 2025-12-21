#include <bits/stdc++.h>
using namespace std;

int max_consecutive(vector<int> &v)
{
    int n = v.size();
    int cnt = 0;
    int maxi = 0;
    vector<int> counts;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
        }
        else
        {
            cnt=0;
        }
        maxi = max(cnt, maxi);
    }
    return maxi;
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

    cout << max_consecutive(v);
    return 0;
}