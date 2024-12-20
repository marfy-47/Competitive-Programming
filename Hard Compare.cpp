#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d;
    cin>>a>>b>>c>>d;
    double s=pow(a,b);
    double s1=pow(c,d);
    if (s>s1)
        cout<<"YES"<<'\n';
    else if(s<s1)
        cout<<"NO"<<'\n';
    else if(s==s1)
        cout<<"NO"<<'\n';
    return 0;
}
