#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, i, mx=0, mn=INT_MAX;
    cin >> n;
    int a[n];
    int res=a[0];
    for(i=0; i<n; i++)
    {
        cin >> a[i];

    }
    for(i=1; i<n; i++)
    {
        res=res&a[i];

    }
    cout << res<< endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}
