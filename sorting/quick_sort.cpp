#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = low;
    int i = low, j = high;
    while (i < j)
    {
        while (i <= high && arr[i] <= arr[pivot])
            i++;
        while (j>=low && arr[j] > arr[pivot])
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quick_sort(arr, low, pivot - 1);
        quick_sort(arr, pivot + 1, high);
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
    quick_sort(v, 0, n - 1);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}