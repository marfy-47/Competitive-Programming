#include<bits/stdc++.h>
using namespace std;

int main ()
{

    string str1,str2;
    cin>>str1;
    cin>>str2;
    int n=min(str1.size(),str2.size());

    int i=str1.size()-1;
    int j=str2.size()-1;
   // cout<<i<<" "<<j<<endl;
    int  count=0;
    while(i>-1 or j>-1){
        if(str1[i]==str2[j]){
            count++;
            i--;
            j--;
        }
        else{
            break;

        }
    }
    int x,y;
     int p=str1.size();
    int q=str2.size();
   // cout<<p<<" "<<q<<" "<<count<<endl;
    x=abs(p-count);
    y=abs(q-count);

   cout<<x+y<<endl;
}
