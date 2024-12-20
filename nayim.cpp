#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int s[n+1][m+1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int f1=i/2;
                int f2=j/2;
                int f3=(f1+f2)&1;
                int f4=(i&1+j&1)&1;

                cout<<f3^f4<<endl;
            }


        }
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<m; j++)
            {
                cout<<s[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
