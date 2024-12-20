#include <iostream>
#include <cmath>

using namespace std;

int min_operations(int n, int k)
{
    if (k == 1)
    {
        return n;
    }
    int operations = 0;
    while (n > 0)
    {
        int x = 0;
        while (pow(k, x + 1) <= n)
        {
            x++;
        }
        n -= pow(k, x);
        operations++;
    }
    return operations;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        cout << min_operations(n, k) << endl;
    }
    return 0;
}
