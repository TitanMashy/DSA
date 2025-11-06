#include <bits/stdc++.h>
using namespace std;

void bub_sort(vector<int> &v, int n)
{
    if(n == 0)
        return;
    bool is_swapped = false;
    for(int i=0; i<n-1; i++){
        if(v[i] > v[i+1]){
            swap(v[i], v[i+1]);
            is_swapped = true;
        }
    }
    if(is_swapped)
        bub_sort(v, n-1);
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
    bub_sort(v, n);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}