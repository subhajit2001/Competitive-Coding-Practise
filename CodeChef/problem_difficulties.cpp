#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int p1[t],p2[t],p3[t],p4[t];

    if(t>=1&&t<=1000)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>p1[i-1]>>p2[i-1]>>p3[i-1]>>p4[i-1];
        }
        for(int i=1;i<=t;i++)
        {
            if(p1[i-1]>=1&&p1[i-1]<=10&&p2[i-1]>=1&&p2[i-1]<=10&&p3[i-1]>=1&&p3[i-1]<=10&&p4[i-1]>=1&&p4[i-1]<=10)
            {
                unordered_map<int,int> umap;
                umap[p1[i-1]]++;
                umap[p2[i-1]]++;
                umap[p3[i-1]]++;
                umap[p4[i-1]]++;
                if(umap.size()==4)
                {
                    cout<<2<<endl;
                }
                else if(umap.size()==1)
                {
                    cout<<0<<endl;
                }
                else if(umap[p1[i-1]]==3||umap[p2[i-1]]==3)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<2<<endl;
                }
            }
        }
    }

    return 0;
}