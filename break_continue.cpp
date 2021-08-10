#include<iostream>
using namespace std;

int main()
{
    int pocketMoney = 3000;
    for(int day=1;day<=30;day++)
    {
        if(day%2==0)
        {
            continue;
        }
        if(pocketMoney==0)
        {
            break;
        }
        cout<<"Can go out today!!! On Day "<<day<<endl;
        pocketMoney = pocketMoney - 300;
    }
    return 0;
}