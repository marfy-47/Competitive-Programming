#include <iostream>
#include <cmath>

using namespace std;

int main() {
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        int moves = 0;
        bool facingX = true;

        while (x != 0 || y != 0) {
            if (facingX) {
                int jump = min(x, k);
                x -= jump;
                moves++;
            } else {
                int jump = min(y, k);
                y -= jump;
                moves++;
            }
            facingX = !facingX;
        }

        cout << moves << endl;
    }

    return 0;
}
