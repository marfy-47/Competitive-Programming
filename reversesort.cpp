#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string t=str;
        sort(t.begin(),t.end());
         if (str==t){
            cout<<0<<endl;
            continue;
         }
         int count0=0,count1=0;
         for (int i=0;i<str.size();i++){
            if (str[i]=='0'){
                count0++;
            }
            else {
                count1++;
            }
         }
         cout<<count0<<" "<<count1<<endl;
         vector<int>v;
         for (int i=0;i<count0;i++){
            if (str[i]=='1'){
                v.push_back(i+1);
            }
         }
         int x=n-count1;
         for (int i=x;i<n;i++){
            if (str[i]=='0'){
                v.push_back(i+1);
            }
         }
         cout<<1<<endl;
         cout<<v.size()<<" ";
         for (auto it : v){
            cout<<it<<" ";
         }
         cout<<endl;

    }

}
