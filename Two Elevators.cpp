#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c,A,B,C;
        cin>>a>>b>>c;
        A=abs(a-1);
        B=abs(c-b);
        C=abs(c-1);
        if(A<(B+C))
            cout<<"1"<<'\n';
        else if((B+C)<A)
        cout<<"2"<<'\n';
        else if(A==(B+C))
            cout<<"3"<<'\n';

    }
    return 0;

}
