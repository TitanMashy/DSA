#include <iostream>
using namespace std;

unsigned long long fact(int n){
    if (n <= 1) return 1;
    return (unsigned long long)n * fact(n - 1);
}

int main() {
    int n;
    string cond = "y";
    while(cond != "n"){
        cout << "enter n: ";
        cin >> n;
        unsigned long long result = fact(n);
        cout << "Factorial of " << n << " is " << result << endl;
        cout << "Do you want to play again(y/n): ";
        cin >> cond;
    }
    return 0;
}