#include <bits/stdc++.h>
using namespace std;

// Hashmap approach
// int once_twice(vector<int> &v)
// {
//     unordered_map<int, int>mp;
//     for (int i = 0; i < v.size(); i++)
//     {
//         mp[v[i]]++;
//     }
//     for(auto it : mp){
//         if(it.second == 1){
//             return it.first;
//         }
//     }
//     return -1;
// }

// XOR Approach
int once_twice(vector<int> &v)
{
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans ^= v[i];
    }

    return ans;
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

    cout << once_twice(v);
    return 0;
}