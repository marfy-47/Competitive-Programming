#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

bool isRightTriangle(const Point& a, const Point& b, const Point& c) {
    int dx1 = b.x - a.x;
    int dy1 = b.y - a.y;
    int dx2 = c.x - a.x;
    int dy2 = c.y - a.y;

    return dx1 * dx2 + dy1 * dy2 == 0;
}

int countRightTriangles(const vector<Point>& points) {
    int n = points.size();
    int count = 0;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (isRightTriangle(points[i], points[j], points[k])) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<Point> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].x >> points[i].y;
        }

        int result = countRightTriangles(points);
        cout << result << endl;
    }

    return 0;
}
