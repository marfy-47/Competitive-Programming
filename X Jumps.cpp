#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,a,b,c;
	    cin>>x>>y;
	    a=x/y;
	    b=x%y;
	    c=a+b;
	    cout<<c<<'\n';
	}
	return 0;
}
