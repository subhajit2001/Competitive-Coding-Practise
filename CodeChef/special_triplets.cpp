#include<iostream>
using namespace std;

int main()
{
    int n;
    int t;
    cin>>t;//no. of test cases

    while(t--)
        {
            cin>>n;//limit
            int count=0;
            
            for(int c=1;c<=n;c++)
            {
                for(int b=c;b<=n;b+=c)
                {
                    if(b%c==0)
                    {
                        for(int a=c;a<=n;a+=b)
                        {
                            if(a%b==c)
                            {
                                count++;
                            }
                        }
                    }
                }
            }
            cout<<count<<endl;
        }
    return 0;
}