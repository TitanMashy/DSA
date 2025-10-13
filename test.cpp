#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 8};
    v.insert(v.begin(), 1);
    for(auto a: v){
        cout<<a<<" ";
    }
    return 0;
} 