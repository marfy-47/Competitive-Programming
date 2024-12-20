#include<bits/stdc++.h>
using namespace std;

#define  ll  long long


int main()
{
        ll n;
        cin>>n;
        ll a[n+5];

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        if(a[n-1]==a[n] or a[n-1]==a[n]-1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

        return 0;
}
