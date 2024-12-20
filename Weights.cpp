#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int W,X,Y,Z;
	    cin>>W>>X>>Y>>Z;
	    if(W==X || W==Y || W==Z)
	    {
	        cout<<"YES"<<'\n';
	    }
	    else if( (X+Y)==W || (X+Z)==W || (Y+Z)==W )
	    {
	        cout<<"YES"<<'\n';
	    }
	    else if(W == (X+Y+Z))
	    {
	        cout<<"YES"<<'\n';
	    }
	    else
	    {
	        cout<<"NO"<<'\n';
	    }
	}
	return 0;
}


