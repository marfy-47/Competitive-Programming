#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A, B;
    int t;
    double s,s1;
    cin>>A>>B;
    t=A/B;
    s=(A/B)/1.0;
    s1=s-t;
    cout<<"floor "<<A<<" / "<<B <<" = "<<t<<endl;
   {

    if(s1>0)
        cout<<"ceil "<<A<<" / "<< B<<" = "<<t+1<<endl;
    else
       cout<<"ceil "<<A <<" / "<<B<<" = "<<t<<endl;}
       {
           if(s1<0.5)
            cout<<"round "<<A<<" / "<< B <<" = "<<t<<endl;
           else if(s1>=0.5)
           cout<<"round "<<A <<" / "<<B <<" = "<<t+1<<endl;

       }

    return 0;


}
