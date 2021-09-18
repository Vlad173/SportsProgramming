#include <iostream>
#include <cmath>
#include <vector>

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
    
    double x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double r = distance(x1, y1, x2, y2);
   
    if (r1 > r2)
       swap(r1, r2); 

    if (r < r2 && r + r1 < r2)
        cout << "NO";
    else if (r > r1 + r2)
        cout << "NO" << nl;
    else
        cout << "YES" << nl;


    return 0;
}

