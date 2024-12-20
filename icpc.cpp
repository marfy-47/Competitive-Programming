
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
    #define pb           push_back
    #define pob          pop_back
    #define F            first
    #define S            second
    #define vll                 vector<ll>
    #define vvll               vector<vll>
    #define vcc                vector<char>
    #define endl               "\n"
    #define vbb                 vector<bool>
    #define  all_0(x)              memset(x,0,sizeof(x))
    #define  all_neg(x)            memset(x,-1,sizeof(x))
    #define  all_1(x)               memset(x,1,sizeof(x))
    #define for0(n) for (int i = 0; i < (int)(n); ++i)
    #define in_range(i,x,y)                 for(int i=x;i<=y;i++)
    #define in_range_back(i,x,y)            for(int i=y;i>=x;i--)
    #define all(v) v.begin(),v.end()
    #define ff first
    #define ss second
    #define vll vector<ll>
    pair<int, int> p;
    vector<int> v;

    map<int,int>mp;
    set<int> st;

 void solve()
 {
    int n;

    cin>>n;
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=0;i<n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;


 }




    void FastIO(){
    ios_base :: sync_with_stdio (false);
    cin.tie(NULL);

}

     void TestCase(){
     int t;
     cin >> t;
     while (t--){
        // Case();
         solve();
     }
}
    int main()
    {
        FastIO();
    TestCase();
    //solve3();


        return 0;

    }
