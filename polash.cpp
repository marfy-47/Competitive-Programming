

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    map<long long, long long > mp;
    ll arr[n];
     long long  a[35];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for (int i = 1; i <= 31; i++)
    {
        a[i] = pow(2, i);
    }
     ll count = 0;
    for (int i = 0; i < n; ++i)
    {
        mp[arr[i]]--;
        for (int j = 1; j <32; ++j)
        {
            int x = a[j] - arr[i];

            if (mp[x] > 0)
            {

                count+= mp[x];
            }
        }
    }
    cout <<count<<endl;
}

void solve2()
{

    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if (a!=b) {
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
}

int main()
{

solve2();
    return 0;
}
