#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long x;
    cin>>x;
    if(x%3==0 || x%5==0 || x%7==0 || x%9==0)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
}
return 0;
}
