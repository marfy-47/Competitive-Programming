
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define nl cout<<"\n";
string spc=" ";





void solve(){
    int n; cin>>n;

    string str; cin >> str;

    int cnt=0;

    int k= n/2;
    bool chk[k+5]={0};
    int j=n-1;
    for(int i=0;i<k;i++){
        if(str[i]!=str[j]){
            chk[i]=1;
        }
        j--;
    }
    for(int i = 0; i < k -1 ;++i){
        if(chk[i]==chk[i+1] && chk[i]==1){
            cnt++;
            chk[i]=0;
            chk[i+1]=0;
            i+=2;
        }
    }
    for(int i = 0; i < k; ++i){
        if(chk[i]==1){
            cnt++;
        }
    }
//    for(int i = 0; i <k ;++i){
//        cout<<chk[i]<<spc;
//    }cout<<endl;

    cout<<cnt<<endl;






}





int main()
{
//    #ifndef ONLINE JUDGE
//    freopen("test_input.txt","r",stdin);
//    #endif
    ios::sync_with_stdio(0);  cin.tie(0);
    int n; cin>>n;
    while(n--)
        solve();


    return 0;
}
