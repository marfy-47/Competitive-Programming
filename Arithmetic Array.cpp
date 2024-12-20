#include <iostream>

using namespace std;

int main() {
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;

        long s = 0;
        for (long p = 0; p < n; p++) {
            long x;
            cin >> x;
            s += x;
        }

        cout << ((s >= n) ? (s - n) : 1) << endl;
    }

    return 0;
}
