#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin>>n;
int count=0;
int u=0;
for(int i=0;i<n;i++){
	int x;
	cin>>x;
	if(x>0){
		count+=x;

	}
	else {
		if(count<1){
		++u;
		}
		else {
			--count;
		}
	}
}
cout<<u<<endl;
	return 0;
}
