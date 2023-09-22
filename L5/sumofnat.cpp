#include<iostream>
using namespace std;

int main()
{
    int i, n, sum;
    cout<<"Enter your number: ";
    cin>>n;

    sum = 0;
    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum;
}