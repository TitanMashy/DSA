#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        // top pyramid

        for (int j = n; j > i; j--)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        // bottom pyramid
        for (int j = 0; j<i+1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k<(2*(n-i))-1; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}