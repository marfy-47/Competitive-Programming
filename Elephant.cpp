#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, count;
    cin>>a;
    count=a/5;
    if(a%5==0)
    {
        cout<<count<<endl;
    }
    else
    {
        cout<<count+1<<endl;
    }

    return 0;
}
