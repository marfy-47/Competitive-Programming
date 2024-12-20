#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    d=a+b+c;
    d=max(d,(a*b*c));
    d=max(d,(a*b)+c);
    d=max(d,(a+b)*c);
    d=max(d,a*(b+c));
    d=max(d,a+(b*c));
    cout<<d<<endl;

}
