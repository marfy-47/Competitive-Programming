#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
    scanf("%d",&t);
while(t--){
    int m,p,b;
    cin>>m>>p>>b;
    if(m>p && p<b)
     cout<<"PIZZA"<<endl;
     else if(m>p && p==b)
        cout<<"PIZZA"<<endl;
    else if(m>b && b<p)
     cout<<"BURGER"<<endl;
    else
    cout<<"NOTHING"<<endl;
}
   return 0;
}
