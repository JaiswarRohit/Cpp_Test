#include<iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter your number: ";
    cin>> n;

    if(n<2)
    {
        cout<<"not a prime no";
        return 0;
    }
    else
    {   
        for(i=2; i<n; i++)
        {
            if (n%i==0)
            {
                cout<<"not a prime no";
                return 0;
            }
        }
        cout<<"Prime";
    }
}