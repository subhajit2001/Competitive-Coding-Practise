#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int half = n/2;

    for(int i=0;i<n;i++)//rows
    {
        if(i<half)
        {
            for(int j=0;j<n;j++)//columns
            {
                if(j>=1&&j<half)
                {
                    cout<<" ";
                }
                else if(i!=0&&i<half&&j>half&&(j<n))
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
        else if(i==half)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j>=0&&j<half&&i!=n-1)
                {
                    cout<<" ";
                }
                else if(j>half&&j<n-1)
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
    }
}