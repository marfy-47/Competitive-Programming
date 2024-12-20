#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[]="abcdefghigklmnopqrstuvwxyz";
    string s;
    cin>>s;
    char inpos= 'a';
    int count =0;
    for(int i=0; i<s.size(); i++)
    {
        int x= min(abs(inpos-s[i]), 26-abs(s[i]-inpos));
        inpos=s[i];
        count +=x;
    }
    cout<<count<<endl;
    return 0;
}
