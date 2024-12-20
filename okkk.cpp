#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
int a[n+5];
	for(int i=0;i<n;i++){
            cin>>a[i];
	}
	sort(a,a+n);
	int q;
	cin>>q;
	while(q--)
    {
        int m;
        cin>>m;

        int ans = upper_bound(a,a+n,m)-a;
        printf("%d\n",ans);
    }


	return 0;
}
