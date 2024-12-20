#include<iostream>
using namespace std;

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        long l,r,c=0;
        cin>>l>>r;
        int i=1;
        while(l<=r)
        {
            l+=i;
            c++;
            i++;
        }
        cout<<c<<endl;
    }

    return 0;
}
