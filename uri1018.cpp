#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,m,n,o,p,q,r,s,t;
    while(1)
    {

        cin>> a;
    m = a/100;
    printf("%d nota(s) de R$ 100,00\n", m);
    n= (a%100)/50;
   printf("%d nota(s) de R$ 50,00\n", n);
    o = (a%50)/20;
    printf("%d nota(s) de R$ 20,00\n", o);
    p = (a%10)/10;
   printf("%d nota(s) de R$ 10,00\n", p);
    q =(a%10)/5;
    printf("%d nota(s) de R$ 5,00\n", q);
    r = (a%5)/2;
    printf("%d nota(s) de R$ 2,00\n", r);
t = (a-(m*100)-(n*50)-(o*20)-(p*10)-(q*5)-(r*2));
   printf("%d nota(s) de R$ 1,00\n", t);

    }


      return 0;

}
