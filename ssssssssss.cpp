#include<bits/stdc++.h>
using namespace std;

void solve(){
  long long  n;
    cin>>n;
    vector<int>v;
    if(n==1){
        cout<<1<<endl;
        return;
    }

    for(int i=9;i>1;i--){
        while(n%i==0){
            n/=i;
            v.push_back(i);
        }
    }

    if(n>1){
            cout<<-1<<endl;
    }
    else{
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i];
        }
        cout<<endl;
    }
}
int main ()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
