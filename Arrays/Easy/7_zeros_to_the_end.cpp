#include <bits/stdc++.h>
using namespace std;

void zerosToTheEnd(vector<int> &arr)
{
    int n = arr.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
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

    zerosToTheEnd(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}