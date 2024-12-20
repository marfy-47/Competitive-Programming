#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a, b, c;
        double av;
        cin>>a>>b>>c;
        av=(a+b)/2;
        if(av>c)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';

    }
    return 0;

}
