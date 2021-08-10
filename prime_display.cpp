#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter upper limit:";
    cin>>b;
    cout<<endl<<"Enter lower limit:";
    cin>>a;

    for(int num=a;num<=b;num++)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num)
        {
            cout<<"Prime number: "<<num<<endl;
        }
    }

    return 0;
}