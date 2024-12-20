#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y,s1,s2;
	    cin>>a>>b>>x>>y;
	    s1=max(a,b);
	    s2=max(x,y);
	   if(s1<s2)
	   cout<<"P"<<'\n';
	   else if(s1==s2)
	   cout<<"TIE"<<'\n';
	   else
	   cout<<"Q"<<'\n';
	}
	return 0;
}
