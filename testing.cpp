
/***
   **    Author: MD.POLASH ISLAM (PRINCE)
   ***/

#include<bits/stdc++.h>
using namespace std;

//constants :
const int   N           = (int) 1e6+5;
const int   M           = (int) 1e9+5;
const int   mod         = (int) 1000000007;
const int   max_prime   = (int) 1e6+3;
const int   BLK         = (int) 700;
const double pi = acos(-1.0);

#define ll           long long int
#define ld           long double
#define pb           push_back
#define pob          pop_back
#define F            first
#define S            second
#define vll          vector<ll>
#define vvll         vector<vll>
#define vcc          vector<char>
#define endl          "\n"
#define vbb                 vector<bool>
#define  all_0(x)            memset(x,0,sizeof(x))
#define  all_neg(x)          memset(x,-1,sizeof(x))
#define  all_1(x)            memset(x,1,sizeof(x))
#define for0(n)  for(int i = 0; i < (int)(n); ++i)
#define in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define vll vector<ll>
#define yes "YES"
#define no "NO"
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)


int divs[N+10];
int ans[N+10];

bool cmp(pair<int,int>a,pair<int,int> b)
{
    if (a.second!=b.second)
    {
        return a.second>b.second;
    }
    else
    {
        return a.second<b.second;
    }
}

int gcd(int  a, int  b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int removeZeros(int num)
{
    int ret = 0;
    int ten = 1;
    while (num)
    {
        int dig = num % 10;
        num /= 10;
        if (dig)
        {
            ret += dig * ten;
            ten *= 10;
        }
    }
    return ret;
}

void divcount()
{
    for (int i=1; i<=N; i++)
    {
        for (int j=i; j<=N; j+=i)
        {
            divs[j]++;
        }
    }

}

ll bigmod()
{
    ll ans=1;
    ll a=6;
    ll n=mod-2;
    ll md=mod;
    while (n)
    {
        if (n%2)
        {
            ans=(ans*a)%md;
            n--;
        }
        else
        {
            a=(a*a)%md;
            n=n/2;
        }
    }
    return ans;
}


int countoftwo(int ans){
    int cnt=0;
    while ( ans>0)
    {
         ans=ans/2;
         cnt++;
    }
    return cnt;

}

/* void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

__int128 read() {
    __int128 x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-') f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * f;
}*/


// starting -->>

 bool isprime(int n) {
    if (n < 2) {
        return false;
    }
    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool checkPowerOfTwo(ll num){
    return (num!=0 && ((num & (num - 1)) == 0));
}


ll sqrta(ll n) {
   ll left = 0, right = sqrt(n) + 1;
    while (left < right) {
        ll mid = (left + right + 1) / 2;
        if (mid * mid <= n) {
            left = mid;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

string checkFactors(int n, int m) {
    for (int i = 1; i <= m; i++) {
        if (n % i == 0 && n/i <= m) {
            return "NO";
        }
    }


}


 ll get(ll l, ll r){
    l--;
    ll ret = r*(r+1)*(2*r+1)/6 - l*(l+1)*(2*l+1)/6;
    return ret;
}


ll gun(ll a, ll b) {
    return (a*b)%mod;
}


ll binpow(ll a, ll b) {
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}


ll sigma(ll x){
    return ((x%mod)*((x+1)%mod)/2)%mod;
}



vector<vector<int>>arr;
vector<int>v2;

void dfs(int u, int v) {
    int count = 0;
    for (int x : arr[u]) {
        if (x!=v) {
            dfs(x, u);
            count +=v2[x];
        }
    }
     if (count == 0){
        count = 1;
    }
     v2[u] = count;
}


 bool cmp2(pair<long double,int>&a,pair<long double,int>&b){

    if(a.first==b.first) return a.second<b.second;
    return a.first>b.first;
}
long long count(const vector<int>& arr) {
    int n = arr.size();
    long long count = 0;

    for (int i = 0; i < n; ++i) {
        count += (i + 1) * (n - i);
    }

    return count - n; // Exclude the case where the entire array is beautiful
}

void solve(){
  int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        long long result = count(A);

        cout << result << endl;

}


int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie(NULL);

     //solve2();
    //divcount();
      int t,k=1;
      cin>>t;

    while (t--)
    {
        cout<<"Case "<<k++<<": ";
         solve();

    }

   //solve();


    return 0;


}

