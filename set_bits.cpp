#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter number "<<endl;
    cin>>num;
    while(1)
    {
        if(num&1==1)
        {
            count++;
        }
        num=num>>1;
        if(num==0)
        {
            break;
        }
    }
    cout<<count;
}