#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string s="3141592653589793238462643383279";
    string s2;
    cin>>s2;
    int count = 0;

    for (int i = 0; i < min(s.length(), s2.length()); i++) {
        if (s[i] == s2[i]) {
            count++;
        }
    }
    cout << count << endl;
    }
   return 0;
}

