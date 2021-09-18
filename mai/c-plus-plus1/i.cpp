#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define f0rn(i, a, n) for (int i = a; i < n; ++i)

typedef long long ll;
typedef long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long > vl;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvl;

const char nl = '\n';


double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed;
    cout.precision(9);
    
    double ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    double r1 = distance(ax, ay, bx, by);
    double r2 = distance(bx, by, cx, cy);
    double r3 = distance(cx, cy, ax, ay);
    double p = (r1 + r2 + r3) / 2;
    cout << sqrt(p * (p - r1) * (p - r2) * (p - r3)) << nl;
    return 0;
}

