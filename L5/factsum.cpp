#include<iostream>
using namespace std;

int main()
{
    int i, n, Fact;
    cout<<"Enter your Number: ";
    cin>>n;

    Fact = 1;
    for (i=1; i<=n; i++){
        Fact = Fact*i;
    }
    cout<<Fact<<endl;
}    