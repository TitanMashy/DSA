#include <bits/stdc++.h>
using namespace std;

// Clean Solution
int longest_subArr_positive(vector<int> &arr, int k)
{
    int n = arr.size();
    int sum = 0;
    int i = 0;
    int maxLen = 0;

    for (int j = 0; j < n; j++)
    {
        sum += arr[j];

        // shrink window if sum exceeds k
        while (sum > k && i <= j)
        {
            sum -= arr[i];
            i++;
        }

        // check for valid window
        if (sum == k)
        {
            maxLen = max(maxLen, j - i + 1);
        }
    }

    return maxLen;
}

// My initial approach
// int longest_subArr_positive(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     int indexes = 0;
//     int i = 0, j = 0; // iterator
//     int sum = 0;
//     while (j < n)
//     {
//         if (sum < k)
//         {
//             sum += arr[j];
//             j++;
//         }
//         else if (sum > k)
//         {
//             sum -= arr[i];
//             i++;
//         }
//         else // sum == k
//         {
//             indexes = max(indexes, j - i);
//             sum -= arr[i];
//             i++;
//         }
//     }
    
//     return indexes;
// }

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << longest_subArr_positive(v, k);
    return 0;
}