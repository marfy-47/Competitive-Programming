#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a, b, c, x, x1, x2, y, y1, y2, s;
	cin>>a>>b>>c;
	x=max(a,b);
	x1=max(b,c);
	x2=max(x,x1);
	y=min(a,b);
	y1=min(b,c);
	y2=min(y,y1);
	s=x2-y2;
	cout<<s<<'\n';
	}
	return 0;
}

