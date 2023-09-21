#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>> num;

    if(num>0)
    {
        cout<<"number is Positive.";
    }
    else if (num==0)
    {
        cout<<"Number is 0";
    }
    else
    {
        cout<<"Number is Negative";
    }
}