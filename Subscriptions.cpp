#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x;
       cin>>n>>x;
       int a= n%6;

       if(a==0)
        cout<< ((n/6)*x)<<endl;
        else
            cout<<((((n/6)+1))*x)<<endl;

    }
}
