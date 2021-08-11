#include<iostream>
using namespace std;
typedef long long int lli;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        lli n,m,sum=0;
        cin>>n>>m;//taking n,m as input
        lli arr[n],i;
        for(i=0;i<n;i++)
        {
            arr[i]=0;
        }
        while(m)
        {
            //cout<<m<<endl;
            m=m-1;
            lli x,y;
            cin>>x>>y;
            for(lli j=1;j<=n;j++)
            {
                if(y!=0&&j%y!=0&&arr[j-1]==0)
                {
                    arr[j-1]=x;
                }
                else if(y!=0&&j%y!=0&&arr[j-1]<x)
                {
                    arr[j-1]=x;
                }
            }
        }
        for(lli j=0;j<n;j++)
        {
            //cout<<arr[j]<<",";
            sum+=arr[j];
        }
        cout<<sum<<endl;
    }
}