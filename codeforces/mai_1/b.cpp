#include <iostream>

const double EPS = 1e-6;
using namespace std;

int main() {
    double ax, ay, bx, by, k;
    std::cin >> ax >> ay >> bx >> by >> k;
    double abx = ax - bx;
    double aby = ay - by;

    double cx = (ax + bx) / 2.0;
    double cy = (ay + by) / 2.0;

    double cdx = -aby;
    double cdy = abx;

    double dx = cx + k * cdx;
    double dy = cy + k * cdy;

    double ex = cx - k * cdx;
    double ey = cy - k * cdy;

    cout << fixed;
    cout.precision(6);
    if (ey - dy == 0)
    {
        cout << min(dx, ex) << " " << dy << endl; 
        return 0;
    }
    if (ey > dy)
    {
        std::swap(dy, ey);
        std::swap(dx, ex);
    }
    cout << dx << " " << dy << endl;
    return 0;
}
