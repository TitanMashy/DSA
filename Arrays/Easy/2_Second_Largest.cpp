#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void secLar(vector<int> arr)
{
    int n = arr.size();
    if (n < 2)
    {
        cout << "No second largest element";
        return;
    }
    int largest = INT_MIN;
    int secLar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secLar = largest;
            largest = arr[i];
        }
        else if (arr[i] > secLar && secLar < largest)
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