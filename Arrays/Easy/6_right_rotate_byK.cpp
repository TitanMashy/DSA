#include <bits/stdc++.h>
using namespace std;

// temp approach
// void rotateByK(vector<int> &v, int k)
// {
//     int n = v.size();
//     if (n==0) return;
//     vector<int> temp;
//     k = k % n; //to normalize k if higher than n
//     for (int i = n - k; i < n; i++)
//     {
//         temp.push_back(v[i]);
//     }
//     for (int i = 0; i < n - k; i++)
//     {
//         temp.push_back(v[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
// }

// modifying original vector
// TLE
//  void rotateByK(vector<int> &v, int k)
//  {
//      int n = v.size();
//      if (n==0) return;
//      k = k % n; //to normalize k if higher than n
//      for (int i = 0; i < k; i++)
//      {
//          // cout<<i<<endl;
//          int num = v[n-1];
//          v.erase(v.end()-1);
//          v.insert(v.begin(), num);
//          // break;
//      }
//  }

void rotateByK(vector<int> &v, int k)
{
    int n = v.size();
    if (n == 0)
        return;
    k = k % n; // to normalize k if higher than n

    //right rotate
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin()+k, v.end());

    //left rotate
    // reverse(v.begin(), v.begin() + k);
    // reverse(v.begin()+k, v.end());
    // reverse(v.begin(), v.end());
}
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

    rotateByK(v, k);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}