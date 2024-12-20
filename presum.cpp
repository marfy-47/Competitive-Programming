// C++ implementation to find all
// Pairs possible from the given Array

#include <bits/stdc++.h>
using namespace std;

void printPairs(int arr[], int n)
{

	vector<pair<int,int>>v;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
                v.push_back( make_pair(arr[i],arr[j]) );


		}
	}
	for (int i=0;i<v.size();i++){
        if((v[i].second-v[i].first==1) and (v[i].first%2==v[i].second%2)){
            cout<<"YES"<<endl;
            return;
        }
	}
	cout<<"NO"<<endl;
}


int main()
{   int t;
cin>>t;
while (t--){


	int n;
	cin>>n;
	int arr[n+5];
	for (int i=0;i<n;i++){
        cin>>arr[i];
	}

	printPairs(arr, n);
}

	return 0;
}
