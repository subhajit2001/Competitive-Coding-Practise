#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to check prime or not :";
    cin>>n;

    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non prime"<<endl;
            break;
        }
    }
    if(i==n)
    {
        cout<<"Prime Number"<<endl;
    }
    return 0;
}