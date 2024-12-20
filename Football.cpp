#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    int i = 1;
    int m = 1;
    int count = 0;
    cin>>n;

    while(m <= n){

        m = ((i*i) + i) / 2;

        if(m > n) break;

        n = n - m;

        count++;

        i++;
    }

    cout<<count<<endl;

    return 0;
}
