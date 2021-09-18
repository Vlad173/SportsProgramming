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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed;
    cout.precision(9);
    
    double a, b, c;
    cin >> a >> b >> c;
    
    double d = b * b - 4 * a * c;
    if (d == 0)
    {
        cout << -b / (2 * a) << nl;
        return 0;
    }

    if (d > 0)
    {
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        if (x1 > x2)
            swap(x1, x2);
        cout << x1 << " " << x2 << nl;
        return 0;
    }

    return 0;
}

