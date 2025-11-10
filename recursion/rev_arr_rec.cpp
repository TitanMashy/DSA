#include <bits/stdc++.h>
using namespace std;

void rev_rec(vector<int>&v, int start, int end){
    if(start < end){
        swap(v[start], v[end]);
        rev_rec(v, start+1, end-1);
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
    rev_rec(v, 0, n-1);
    for(int a : v){
        cout<<a<<" ";
    }
    return 0;
}