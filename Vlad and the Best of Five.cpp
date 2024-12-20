#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=5;
        int countA=0, countB=0;
        string s;
        cin >> s;
        for( int i=0; i<n; i++)
        {
//            cin>>s[i];
            if(s[i]=='A')
                countA++;
            else
                countB++;
        }
        if(countA>countB)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}
