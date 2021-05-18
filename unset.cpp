#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,pos;
    cout<<"Enter number";
    cin>>num;
    cout<<"Enter the position";
    cin>>pos;
    num=num^((pos-1)<<1);
    cout<<num;
}