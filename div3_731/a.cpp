// A - Кратчайший путь с препятствиями.

#include <iostream>

using namespace std;

int main()
{
    int ax, ay, bx, by, fx, fy;
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        int res = abs(ax - bx) + abs(ay - by);
        int max = std::max(ay, by);
        int min = std::min(ay, by);
        if (ax == bx && bx == fx && fy > min && fy < max)
            res += 2;
        max = std::max(ax, bx);
        min = std::min(ax, bx);
        if (ay == by && by == fy && fx > min && fx < max)
            res += 2;
        cout << res << endl;
    }
}


