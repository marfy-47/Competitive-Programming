
#include<bits/stdc++.h>
using namespace std;

#define ll           long long
#define pb           push_back
#define pob          pop_back



typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
const int N=1e5+9;

VI G[N],v;
int vis[N];
bool cycle;


void dfs(int p){

	if(vis[p]!=-1) return;
	vis[p]=1;
	int x;
	for(int child:G[p]){

		if(vis[child]==1){
			cycle=true;
		}
		else if(vis[child]==-1){
			dfs(child);
		}
		if(cycle)return;
	}

	vis[p]=2;
	v.pb(p);
	return;
}

void solve(){

    int x,n,m;
    cin>>n>>m;

    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        G[a].pb(b);
   }
   cycle=0;
   memset(vis,-1,sizeof(vis));
   for(int i=1;i<n+1;i++){
        if(vis[i]==-1){
            dfs(i);
        }
        if(cycle) break;
   }

   if(cycle){
   	cout<<"IMPOSSIBLE"<<endl;
   }
   else{
        for(int i=v.size()-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
   }


}
int main()
{

    solve();


    return 0;
}
