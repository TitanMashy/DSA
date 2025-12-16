#include <bits/stdc++.h>
using namespace std;

void linear_search(vector<int> &v, int k)
{
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == k){
            cout<<"Present at "<<i<<" index";
            return;
        }
    }
    cout<<"Not Present";
}

int main()
{
    int n;
    cin >> n;
    int k = 3;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    linear_search(v, k);
    return 0;
}