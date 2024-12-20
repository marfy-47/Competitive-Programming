#include<iostream>
#include<stack>
using namespace std;

stack<char> s;

int main()
{

    string str;
    cin>>str;
    int n=str.size();

    for(int i=0;i<n;i++){
        s.push(str[i]);
    }

    int c=0;
    while(!s.empty()){
        if(s.top()>='0' && s.top()<='9'){
            ++c;
        }
        s.pop();
    }

    cout<<c<<endl;

    return 0;
}
