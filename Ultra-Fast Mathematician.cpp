#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin>>s>>s1;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s1[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
    }

return 0;

}
