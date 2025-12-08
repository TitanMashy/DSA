#include <bits/stdc++.h>
using namespace std;

void rmv_dup(vector<int> &v)
{
    int n = v.size();
    if (n <= 1)
        return;
    // approach 1: Using temp array
    // vector<int> temp;
    // temp.push_back(v[0]);
    // for (int i = 1; i < v.size() - 1; i++)
    // {
    //     if (v[i] > v[i - 1])
    //         temp.push_back(v[i]);
    // }
    // for(int i: temp){
    //     cout<<i;
    // }

    // approach 2: altering existing vector
    for (size_t i = 1; i < v.size(); ++i)
    {
        if (v[i] == v[i - 1])
        {
            v.erase(v.begin() + i);
            --i; // step back to re-check the current index after erase
        }
    }
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

    rmv_dup(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i];
    }
    return 0;
}