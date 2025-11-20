#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void is_sorted(vector<int> arr)
{
    for (int i = 0; i < arr.size()-1; i++)
    {
        if(arr[i] > arr[i+1]){
            cout<<"array is not sorted";
            return;
        }
    }
    cout<<"array is sorted";
    
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

    is_sorted(v);

    return 0;
}