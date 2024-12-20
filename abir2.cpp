
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define nl cout<<"\n";
string spc=" ";





void solve(){
    int n; cin >>n;
    int ar[n+5];
    for(int i =0;i <n;i++){
        cin >> ar[i];
    }
    sort(ar,ar+n);
    int cnt=0;
    int kom=0,besi=0;
    for(int i = 0 ;i<n;i++){
        for(int j=0;j<n;j++){
            if(ar[i]<ar[j]) besi++;
            else if(ar[i]>ar[j]) kom++;
        }
        if(besi<kom+1) cnt++;
        kom=0;besi=0;
    }

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

