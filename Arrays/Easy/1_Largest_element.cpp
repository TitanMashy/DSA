#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void largestEl(vector<int>v){
    int maxi = INT_MIN;
    for(int i=0; i<v.size(); i++){
        if(v[i] > maxi){
            maxi = v[i];
        }
    }
    cout<<maxi;
}

int main(){
    int n; cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    largestEl(v);
    return 0;
}