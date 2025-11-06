#include <bits/stdc++.h>
using namespace std;

// Selection Sort

void ins_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int j = i;
        //travel in reverse from i to index 0 until j > j-1
        while (j>0 && v[j] < v[j-1])
        {
            swap(v[j], v[j-1]);
            //move j to the left(index 0)
            j--;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ins_sort(v);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}