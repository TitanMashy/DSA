#include <bits/stdc++.h>
using namespace std;

void printPyramid(int n, int row = 1, int col = 1)
{
    // Base case: all rows done
    if (row > n)
        return;
    
    // Print current position and move to next column
    if (col <= 2 * n - 1)
    {
        // Print space or star based on position
        cout << (col <= n - row || col > n + row - 1 ? " " : "*");
        printPyramid(n, row, col + 1);
        return;
    }
    
    // Move to next row
    cout << endl;
    printPyramid(n, row + 1, 1);
}

int main()
{
    int n;
    cin >> n;
    printPyramid(n);
    return 0;
}