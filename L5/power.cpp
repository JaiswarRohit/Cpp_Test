#include<iostream>
using namespace std;

int main()
{
    int n, p, i, num;
    cout<<"Enter Your number: ";
    cin>>n;
    cout<<"Enter your Power: ";
    cin>>p;

    num = n;
    for (i=1; i<p; i++){
        num=num*n;
    }
    cout<<num;
}