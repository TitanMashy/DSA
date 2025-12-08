#include <bits/stdc++.h>
using namespace std;

void leftRotateBy1(vector<int> &v)
{
    // shortcut method
    //  int first = v[0];
    //  v.erase(v.begin()+0);
    //  v.push_back(first);

    // long-cut method
    int n = v.size();
    int first = v[0];
    for (int i = 1; i <= n - 1; i++)
    {
        v[i - 1] = v[i];
    }
    v[n - 1] = first;
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

    leftRotateBy1(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}