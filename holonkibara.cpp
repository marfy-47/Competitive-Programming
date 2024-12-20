
#include<bits/stdc++.h>
using namespace std;
int const N=1e6+5;
int divs[N];



void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    vector<int>v;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
     v.push_back(arr[0]);
    for (int i=1;i<n;i++){
        if (__gcd(arr[i-1],arr[i])>1){

            v.push_back(1);
            v.push_back(arr[i]);

        }
        else {
            v.push_back(arr[i]);
        }

    }
    cout<<v.size()-n<<endl;
    for (auto s:v){
        cout<<s<<" ";
    }
    cout<<endl;
}



int main()
{


   solve();
}
