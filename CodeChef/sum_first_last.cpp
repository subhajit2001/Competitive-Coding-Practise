#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num[n];

    for(int i=1;i<=n;i++)
    {
        cin>>num[i-1];
    }

    for(int i=1;i<=n;i++)
    {
        int d,copy = num[i-1],c=0;
        do
        {
            d = copy%10;
            c++;//number of digits
            copy = copy/10;
        } 
        while (copy!=0);
        int q = pow(10,c-1);
        int last_digit = num[i-1]%10;
        int first_digit = num[i-1]/q;
        int sum = last_digit + first_digit;
        cout<<sum<<endl;
    }
}