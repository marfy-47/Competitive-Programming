#include<bits/stdc++.h>
using namespace std;
int const N=1e6+5;
int divs[N];

 void divcount()
 {
    for (int i=1;i<=N;i++){
    	for (int j=i;j<=N;j+=i){
    		divs[j]++;
    	}
    }
 }



void solve()
{
     //divcount();
   long long  n;
   cin>>n;
 int cnt = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {

            if (n / i == i)
                cnt++;

            else{
                cnt = cnt + 2;
            }

        }
    }
   cout<<cnt<<endl;
   //cout<<divs[n]<<endl;


}


int main()
{


   solve();
}
