#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    if(a%2==0)
    {
        cout<<a<<" is Even number";
    }
    else
    {
        cout<<a<<" is Odd number";
    }
}