#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void secLar(vector<int> arr)
{
    int maxi = INT_MIN;
    int secLar = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxi)
        {
            secLar = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > secLar && arr[i] < maxi)
        {
            secLar = arr[i];
        }
    }
    cout << secLar;
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

    secLar(v);

    return 0;
}