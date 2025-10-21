#include <iostream>
using namespace std;

void fibo(int n) //fibonacci series
{
    int first = 0;
    int second = 1;
    int third = 0;
    if(n<=0) return;
    if(n==1) cout<<"0";
    if(n==2) cout<<"0, 1";
    if (n >= 3)
    {
        cout << "0, 1, ";
        for (int i = 2; i < (n); i++)
        {
            third = first + second;
            cout << third << ", ";
            first = second;
            second = third;
        }
    }
}

int main()
{
    int n;
    cout << "input series to print : ";
    cin >> n;
    cout<<n<<endl;
    fibo(n);
    return 0;
}