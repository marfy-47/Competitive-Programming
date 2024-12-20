#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n, k, c=0;
    cin >> n >> k;
    long long a[n], b[99999] = {0};
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];

    }
    //sort(a,a+n);
    for(int i=1; i<=n; i++)
    {
        b[a[i]]++;
    }
    for (int i= 1;i<=n;i++){
        cout<<i<<" "<<b[i]<<endl;
    }

    for(int i=1; i<=n; i++)
    {
        if(b[i]>=k )
        {
            c = c+k;
        }
        else
        {
            c = c+b[i];
        }
       // if(b[i]>0)
            //cout<<b[i]<<endl;
    }
    cout << c << endl;

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

