#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define nl "\n"
#define sp <<" "<<
#define mod 1000000007
using namespace std;
const double eps = 1e-12;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t, n,k; cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s; cin>>s;

        int cnt=0;

        for(int i=0; i<k; i++)
            if(s[i]=='W') cnt++;

        int ans=cnt;
        for(int i=k,j=0; i<n; i++,j++)
        {
            if(s[j]=='W') cnt--;
            if(s[i]=='W') cnt++;

            ans = min(ans,cnt);
        }
        cout<<ans<<"\n";
    }

    return 0;
}


