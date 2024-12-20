#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int n;
        cin>>n;
        if(n<4)
        {
            cout<<"1"<<endl;
        }
        else
        {
            while(n>=4)
            {
                n-=4;
                c++;
            }
            if(n>=2)
            {
                c++;
            }
            cout<<c<<endl;
        }
    }
    return 0;
}
