#include<iostream>
#include<boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;

cpp_int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cin>>n;

    int num[n],a;
    cpp_int factorial;

    if(n>=1&&n<=100)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>num[i-1];
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(num[i-1]>=1&&num[i-1]<=100)
        {
            a = num[i-1];
            factorial = fact(a);
            cout<<factorial<<endl;
        }
    }
    return 0;
}