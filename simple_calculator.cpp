#include<iostream>
using namespace std;

int main()
{
    float n1,n2;
    cout<<"Enter 2 numbers : ";
    cin>>n1>>n2;

    char op;
    cout<<endl<<"Enter operator : ";
    cin>>op;

    switch(op)
    {
        case '+':
            cout<<n1+n2<<endl;
        break;

        case '-':
            cout<<n1-n2<<endl;
        break;

        case '*':
            cout<<n1*n2<<endl;
        break;

        case '/':
            cout<<n1/n2<<endl;
        break;

        default:
            cout<<"Invalid operator!"<<endl;
        break;
    }

    return 0;
}