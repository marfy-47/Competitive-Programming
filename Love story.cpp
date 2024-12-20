#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
        {
    string s = "codeforces";
    string s2;
    cin>>s2;
    int count = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == s2[count]) {
            count++;
        }
        if(count == s2.length()) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
}
