//decimalTobinary


#include <bits/stdc++.h>
using namespace std;

typedef     long long       ll;

vector<ll> decimalTobinary(ll N) {
    vector<ll> num;
    while(N) {
        num.push_back(N&1);
        N = N >> 1;
    }
    reverse(num.begin(), num.end());
    return num;
}

int main()
{
   ll N, X; cin >> N >> X;
   vector<ll> arr(N);
   for(auto &i : arr) cin >> i;

   ll mask_lim = 1 << N;
   for(int mask = 1; mask < mask_lim; mask++)
   {
    ll sum = 0;
    for(int j = 1, k = 0; j < mask_lim; j <<= 1, k++)
    {
        if(mask&j) sum += arr[k];
    }
    if(sum == X) {
        cout << "yes\n";
        for(int j = 1, k = 0; j < mask_lim; j <<= 1, k++)
        {
            if(mask&j) cout << arr[k] << " ";
        }
        cout << "\n"; exit(0);
    }
   }
   cout << "no\n";
}




//primefactor and seive

#include <bits/stdc++.h>
using namespace std;

typedef     long long       ll;

const int MAX = 100;
bitset<105> notPrime;
void seive()
{
    notPrime &= 0;
    notPrime[1] = 1;
    // int lim = sqrtl(MAX);
    for(int i = 4; i <= MAX; i+= 2)
    {
        notPrime[i] = 1;
    }
    for(int i = 3; i * i <= MAX; i+=2)
    {
        if(notPrime[i]) continue;
        for(int j = i*i; j <= MAX; j += i+i) {
            notPrime[j] = 1;
        }
    }

    for(int i = 1; i <= MAX; i++)
    {
        if(!notPrime[i]) cout << i << " ";
    }
    cout << "\n";
}

vector<pair<int,int>> printAllPrimeFactors(int n)
{
    vector<pair<int,int>> f;
    for(int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        while(n%i == 0) {
            // cout << i << " ";
            n/=i;
            cnt++;
        }
        if(cnt) f.push_back({i,cnt});
    }
    if(n > 1) {
        f.push_back({n,1});
    }
    // for(auto [p, powr] : f) {
    //     cout << "(" << p << ", " << powr <<") ";
    // }
    // cout << "\n";
    return f;
}

void solve()
{
    int n; cin >> n;
    vector<int> divs, divs2;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0) {
            int j = n/i;
            if(i == j) divs.push_back(i);
            else divs.push_back(i), divs2.push_back(j);
        }
    }
    reverse(divs2.begin(), divs2.end());
    divs.insert(divs.end(), divs2.begin(), divs2.end());
    // for(auto d : divs) {
    //     cout << d << " ";
    // }
    // cout <<"\n";
    if(divs.size() == 2) cout << "Prime\n";
    else cout << "Not prime!\n";
}
int main()
{
    // int T ; cin >> T;
    // while(T--)
    // {
    //     solve();
    // }
    // seive();
    // int i; cin >> i;
    // auto f = printAllPrimeFactors(i);
    // for(auto [p, powr] : f) {
    //     cout << "(" << p << ", " << powr <<") ";
    // }
    // cout << "\n";
}






//logN prime factor


#include <bits/stdc++.h>
using namespace std;

typedef     long long       ll;

const int MAX = 1e6;
int lp[MAX+5]; // lp[i] = least prime factor of i

void seive()
{
    for(int i = 1; i <= MAX; i++)
    {
        lp[i] = i;
    }
    for(int i = 2; i * i <= MAX; i++)
    {
        if(lp[i] != i) continue;
        for(int j = i * i;  j <= MAX; j += i)
        {
            if(lp[j] == j) lp[j] = i;
        }
    }
}

vector<pair<int,int>> findPrimeFactors(int n)
{
    vector<pair<int,int>> f;
    while(n > 1)
    {
        int j = lp[n];
        int cnt = 0;
        while(n%j == 0)
        {
            n/=j; ++cnt;
        }
        f.push_back({j,cnt});
    }
    return f;
}

int main()
{
    seive();
    int n; cin >> n;
    auto f = findPrimeFactors(n);
    for(auto [p, powr] : f) {
        cout << "(" << p << ", " << powr <<") ";
    }
    cout << "\n";
}n
