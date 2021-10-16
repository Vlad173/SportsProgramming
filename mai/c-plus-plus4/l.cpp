#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define f0rn(i, a, n) for (int i = a; i < n; ++i)

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
    
    ll n, a, b;
    cin >> n >> a >> b;

    ll l = 0;
    ll r = max(a, b) * (n - 1);
    ll start = min(a, b);
    while (l + 1 < r)
    {
        ll m = (l + r) / 2;
        if (m / a + m / b >= n - 1)
            r = m;
        else 
            l = m;
    }
    cout << r + start << nl;
    return 0;
}
