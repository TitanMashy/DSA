#include <bits/stdc++.h>
using namespace std;

void bub_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = n - 1; i >= 0; i--)
    {
        bool is_swapped = false;
        //to check if already sorted or not (best-case).
        for (int j = 0; j <= i-1; j++)
        {
            if(v[j] > v[j+1]){
                swap(v[j], v[j+1]);
                is_swapped = true;
            }
        }
        //if swap never happens.
        if(!is_swapped)
            break;
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
    bub_sort(v);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}