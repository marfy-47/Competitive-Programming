#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c,d, e;
        cin>>a>>b;
        c=a-2;
        d=c/b;
        e=c%b;
        if(a==1 || a==2)
            cout<<"1"<<endl;
        else if(c%b==0)
            cout<<d+1<<endl;
        else
            cout<<d+2<<endl;
    }
    return 0;
}
