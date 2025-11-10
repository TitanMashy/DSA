#include <bits/stdc++.h>
using namespace std;

// Selection Sort

void sel_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[minIndex] > v[j])
            {
                //find minIndex in every iteration & swap with i.
                minIndex = j;
            }
        }
        // to avoid duplicate number swapping
        if (minIndex != i)
            swap(v[i], v[minIndex]);
            //swapped with i for per iteration of inner loop.
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
    sel_sort(v);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}