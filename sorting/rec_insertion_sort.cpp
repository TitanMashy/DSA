#include <bits/stdc++.h>
using namespace std;

// Selection Sort

void ins_sort(vector<int> &v, int n, int i=0)
{
    if (i == n)
        return;
    int j = i;
    while (j>0 && v[j] < v[j-1])
    {
        swap(v[j], v[j-1]);
        j--;
    }
    ins_sort(v, n, i+1);
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
    ins_sort(v, n);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}