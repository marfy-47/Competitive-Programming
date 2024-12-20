#include<bits/stdc++.h>
using namespace std;


int main()
{
         int n;
     cin>>n;

     vector<pair<int,int>> v;

     for(int i=0;i<n;i++)
     {
          int x;
          cin>>x;

          v.push_back({x,i+1});
     }

     sort(v.rbegin(),v.rend());
     for (int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
     }

     long long sum=0;
     for(int i=0;i<n;i++)
     {
          sum+=(i*v[i].first)+1;
     }
     cout<<sum<<"\n";

     for(auto x:v)
     cout<<x.second<<" ";
    cout<<endl;

}
