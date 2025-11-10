#include <bits/stdc++.h>
using namespace std;

void regular_method(vector<int> &v)
{
    vector<bool> visited(v.size(), false);
    for (int i = 0; i < v.size(); i++)
    {
        if (visited[i] == true)
            continue;
        int count = 1;
        for (int j = i + 1; j < v.size(); j++)
        {
            if(v[i] == v[j]){
                count++;
                visited[j] = true;
            } 
        }
        cout<<v[i]<<" "<<count<<endl;
    }
}

void hash_method(vector<int> &v)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
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
    hash_method(v);
    // regular_method(v);
    return 0;
}