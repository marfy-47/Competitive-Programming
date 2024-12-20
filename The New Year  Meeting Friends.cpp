#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int m[3];
int main() {
    cin >> m[0] >> m[1] >> m[2];
    sort(m, m + 3);
    cout << m[2] - m[0];
    return 0;
}
