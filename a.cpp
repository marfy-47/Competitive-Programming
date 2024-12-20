#include<bits/stdc++.h>
using namespace std;
void print(string str2,int n)
{
    cout<<str2<<endl;
}
int main ()
{   int y,z;
  for (int i=1;i<=5;i++){
    for (int j=1;j<=5;j++){
        int x;
        cin>>x;
        if(x==1){
            y=i;
            z=j;
        }
    }
     cout<<abs(y-3)+abs(z-3)<<endl;
  }


}
