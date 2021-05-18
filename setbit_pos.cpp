#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos;
    cout<<"Enter number"<<endl;
    cin>>num;
    cout<<"Enter position"<<endl;
    cin>>pos;
    num=num>>(pos-1);
    if(num&1==1)
    {
        cout<<"set bit";
    }
    else{
        cout<<"Not set bit";
    }
}