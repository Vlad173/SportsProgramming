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
    int d;
    cin >> d;
    int x, y;
    cin >> x >> y;
    double r = sqrt(x * x + y * y);
    if (r > d)
        cout << "NO" << nl;
    else
        cout << "YES" << nl;
    return 0;
}

