#include <iostream>
#include <vector>
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
    
    int a, b;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    long double sum = ((a + b) / 2.0);
    cout << static_cast<long long>(sum * (b - a + 1)) << nl;
    return 0;
}

