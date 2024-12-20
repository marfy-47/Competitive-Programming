#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int s,t,w;
	    cin>>s>>t>>w;
	    if(s>t && s>w)
	    cout<<"Setter"<<'\n';
	    else if(t>s && t>w)
	    cout<<"Tester"<<'\n';
	    else
	    cout<<"Editorialist"<<'\n';
	}
	return 0;
}
