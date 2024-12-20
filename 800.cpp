#include<bits/stdc++.h>
using namespace std;
int main(){

 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int  array[n+1];
    int count1=0,count2=0;
    for (int i=0;i<n;i++){
      cin>>array[i];
      if(array[i]%2==0){
        count1++;
      }
      else{
        count2++;
      }
    }
    cout<<min(count1,count2)<<endl;

 }

}
