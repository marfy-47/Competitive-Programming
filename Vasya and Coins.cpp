#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
int solve(int a, int b)
{
    if(a == 0)
        return 1;
    else
        return a*1+b*2+1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        cout<<solve(a, b)<<endl;
    }
    return 0;
}
