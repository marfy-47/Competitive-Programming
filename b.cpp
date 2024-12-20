
#include<bits/stdc++.h>
using namespace std;
void print(string str2,int n)
{
    cout<<str2<<endl;
}
int main ()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++){
      int n;
  cin>>n;
  int array[n+5];
  long long  sum=0;
  for (int i=0;i<n;i++){
    cin>>array[i];
    if(array[i]>0){
        sum+=array[i];
    }
  }
  cout<<"Case "<<i<<": "<<sum<<endl;
  }


}
