#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;;
    cin>>s;
    int x=s.length();
    for(int i=0; i<x; i++)
    {
        if( s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u' || s[i]=='Y' || s[i]=='y')
        {
            continue;
        }
        else
        {
            s2+='.';
            s2+=towlower(s[i]);

        }
    }
    cout<<s2<<endl;
    return 0;

}
