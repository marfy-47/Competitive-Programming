#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	     if((x*100)/10==(y*100)/20)
	     cout<<"ANY"<<'\n';
	     else if((x*100)/10>(y*100)/20)
	      cout<<"FIRST"<<'\n';
	     else
	   cout<<"SECOND"<<'\n';
	}
	return 0;
}
