#include<iostream>
using namespace std;
typedef long long int lli;

int main()
{
    lli t;
    cin>>t;

    lli p1[t],p2[t],p3[t];

    for(lli i=1;i<=t;i++)
    {
        cin>>p1[i-1]>>p2[i-1]>>p3[i-1];
    }
    for(lli i=1;i<=t;i++)//iterating over test cases
    {
        int count=0;
        for(lli k=0;k<p3[i-1];k++)//iterating over indexes of gases
        {
            for(lli j=k;j<p1[i-1];j+=p3[i-1])//iterating over remainders
            {
                if(j%p3[i-1]==k)
                {
                    count++;
                    if(j==p2[i-1])
                    {
                        cout<<count<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}