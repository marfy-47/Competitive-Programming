#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a, b, c, d, s1, s2, S;
    cin>>a>>b>>c>>d;
    s1=max(a,b);
    s2=max(c,d);
    S=s1+s2;
    cout<<S<<endl;
}
	return 0;
}
