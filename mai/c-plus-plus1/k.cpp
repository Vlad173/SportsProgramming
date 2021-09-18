#include <iostream>
#include <vector>
#include <cmath>

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    double ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;
        
    int minx = min(max(ax1, ax2), max(bx1, bx2));
    int maxx = max(min(ax1, ax2), min(bx1, bx2));
    int miny = min(max(by1, by2), max(ay1, ay2));
    int maxy = max(min(by1, by2), min(ay1, ay2));

    if (minx < maxx || miny < maxy)
        cout << 0 << nl;
    else
        cout << (minx - maxx) * (miny - maxy) << nl;

    return 0;
}

