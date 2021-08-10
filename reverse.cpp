#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int d,reverse = 0;

    do
    {
        d = n%10;
        reverse = (reverse * 10) + d;
        n = n/10;
    } 
    while (n!=0);

    cout<<"Reverse : "<<reverse<<endl;
    
}