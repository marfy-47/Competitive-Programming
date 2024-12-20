#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b;
    c=min(a,b);
    d=a-b;
    e=abs(a-b);
    cout<<c <<" "<<e/2<<endl;

}
