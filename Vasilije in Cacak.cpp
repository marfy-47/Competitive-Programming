#include <iostream>
using namespace std;
int main()
{

    long t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        long a(0), b(0), c(0);
        for(long p = 0; p < s.size(); p++)
        {
            a += (s[p] == 'A');
            b += (s[p] == 'B');
            c += (s[p] == 'C');
        }

        cout << (b == a + c ? "YES" : "NO") << endl;
    }

}
