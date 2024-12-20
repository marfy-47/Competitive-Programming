#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int a, b, c;
        cin >> a >> b >> c;

        if (x == 0)
        {
            cout << "NO" << endl;
        }
        else if (x == 1)
        {
            if (a == 0) cout << "NO" << endl;
            else if (a == 2 && b != 0) cout << "YES" << endl;
            else if (a == 3 && c != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}

