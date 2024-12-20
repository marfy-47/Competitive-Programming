#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

long long count(const vector<int>& arr) {
    int n = arr.size();
    long long count = 0;

    for (int i = 0; i < n; ++i) {
        count += (i + 1) * (n - i);
    }

    return count - n; // Exclude the case where the entire array is beautiful
}

int main() {
    int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        long long result = count(A);

        cout << result << endl;
}

