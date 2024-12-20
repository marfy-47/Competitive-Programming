#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b, t, h, p, s, need;
    cin>>b>>t>>h;
    p=(h*(h +1))/2;
    s=p*b;
    need=(s-t);
    if(need>0)
        cout<<need<<endl;
    else
        cout<<0<<endl;
    return 0;
}
