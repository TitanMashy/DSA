#include <bits/stdc++.h>
using namespace std;

void printTable(int n, int i = 10) {
    if(i<1) return;
    printTable(n, i-1);
    cout << n << " X " << i << " = " << n * i << endl;
}

int main() {
    printTable(5);  // Print table of 4 up to 10
    return 0;
}