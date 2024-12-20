
#include<bits/stdc++.h>
#define pb push_back
#define mk make_pair
#define nl "\n"
#define sp <<" "<<
#define mod 1000000007
using namespace std;
const double eps = 1e-12;
typedef long long int ll;

void div(ll n){
vector<int>v;
int ans=1;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			ans=n/i;
			break;
		}
}

        cout<<ans<<" "<<n-ans<<endl;



}

int main()
{

    int t, n,k; cin>>t;
    while(t--)
    {
       ll x;
       cin>>x;
       div(x);
    }

    return 0;
}


