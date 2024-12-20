#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long t;
    cin >> t;
    while(t--)
    {
        long n, k;
        cin >> n >> k;
        vector<std::pair<long, long>> v(n);
        for(long p = 0; p < n; ++p)
        {
            cin >> v[p].first;
        }
        for(long p = 0; p < n; ++p)
        {
            cin >> v[p].second;
        }
        sort(v.begin(), v.end());

        long ram = k;
        for(long p = 0; p < n; ++p)
        {
            if(ram < v[p].first)
            {
                break;
            }
            ram += v[p].second;
        }

        cout << ram <<endl;
    }

    return 0;
}
