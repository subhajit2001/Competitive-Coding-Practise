#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int g1[n],s1[n],b1[n],g2[n],s2[n],b2[n];

    if(n>=1&&n<=1000)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>g1[i-1]>>s1[i-1]>>b1[i-1]>>g2[i-1]>>s2[i-1]>>b2[i-1];
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(g1[i-1]>=0&&g1[i-1]<=30&&s1[i-1]>=0&&s1[i-1]<=30&&b1[i-1]>=0&&b1[i-1]<=30&&g2[i-1]>=0&&g2[i-1]<=30&&s2[i-1]>=0&&s2[i-1]<=30&&b2[i-1]>=0&&b2[i-1]<=30)
        {
            if((g1[i-1]+s1[i-1]+b1[i-1])>(g2[i-1]+s2[i-1]+b2[i-1]))
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
    }

    return 0;

}