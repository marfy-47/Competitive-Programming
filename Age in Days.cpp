#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,y,m,d;
    cin>>a;
    y=a/365;
    m=(a%365)/30;
    d=((a%365)%30);
    cout<<y<<" Years"<<'\n';
    cout<<m<<" Months"<<'\n';
    cout<<d<<" Days";


}
