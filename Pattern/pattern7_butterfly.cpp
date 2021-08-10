#include<iostream>
using namespace std;

int main()
{
    int row;

    cout<<"Enter no. of rows : ";
    cin>>row;

    int len = 2*row;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=len;j++)
        {
            if(j>i&&j<(len-i+1))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=len;j++)
        {
            if(j>i&&j<(len-i+1))
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
}