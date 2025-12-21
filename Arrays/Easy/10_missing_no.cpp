#include <bits/stdc++.h>
using namespace std;

// Brute Force
// int missing_no(vector<int> &v)
// {
//     int n = v.size();
//     for (int i = 0; i < n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[j] == i)
//             {
//                 flag = 1;
//             }
//         }
//         if(!flag){
//             return i;
//         }
//     }
//     return -1;
// }

// Optimized 1
// int missing_no(vector<int> &v)
// {
//     int n = v.size();
//     // int sum = 0;
//     int arrSum = 0;
//     // for (int i = 0; i <= n; i++)
//     // {
//     //     sum += i;
//     // }
//     int sum = (n*(n+1))/2;
//     for (int i = 0; i < n; i++)
//     {
//         arrSum += v[i];
//     }
//     return sum-arrSum;
// }

// Optimized: XOR approach
int missing_no(vector<int> &v)
{
    int n = v.size();
    int xorArr = 0;
    int xorN = 0;
    for (int i = 0; i < n; i++)
    {
        xorArr ^= v[i];
        xorN ^= i + 1;
    }
    return xorArr ^ xorN;
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

    cout << missing_no(v);
    return 0;
}