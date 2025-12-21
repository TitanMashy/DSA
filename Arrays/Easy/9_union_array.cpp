#include <bits/stdc++.h>
using namespace std;

// hashmap approach
// vector<int> union_arr(vector<int> &a, vector<int> &b)
// {
//     unordered_map<int, int> mp;
//     vector<int> ans;
//     for (int i = 0; i < a.size(); i++)
//     {
//         mp[a[i]]++;
//     }
//     for (int i = 0; i < b.size(); i++)
//     {
//         mp[b[i]]++;
//     }
//     for (auto it : mp)
//     {
//         ans.push_back(it.first);
//     }
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// unordered_set approach
// vector<int> union_arr(vector<int> &a, vector<int> &b)
// {
//     unordered_set<int>s;
//     for (int i = 0; i < a.size(); i++)
//     {
//         s.insert(a[i]);
//     }
//     for (int i = 0; i < b.size(); i++)
//     {
//         s.insert(b[i]);
//     }
//     vector<int>ans(s.begin(), s.end());
//     sort(ans.begin(), ans.end());
//     return ans;
// }

// two pointer approach (optimal)
vector<int> union_arr(vector<int> &a, vector<int> &b)
{
    vector<int> ans;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    //can skip if already sorted in question
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            if (ans.empty() || ans.back() != b[j])
                ans.push_back(b[j]);
            j++;
        }
        else // a[i] == b[j]
        {
            if (ans.empty() || ans.back() != a[i])
                ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    //add remaining elements of a and b
    while(i<n){
        if(ans.empty() || ans.back()!=a[i])
            ans.push_back(a[i]);
        i++;
    } 
    while(j<m){
        if(ans.empty() || ans.back()!=b[j])
            ans.push_back(b[j]);
        j++;
    } 
    return ans;
}

int main()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    // vector<int> ans = union_arr(a, b);
    vector<int> ans = union_arr(a, b);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}