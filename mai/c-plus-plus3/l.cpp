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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int& i : v)
        cin >> i;
    sort(begin(v), end(v));
    
    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        int div = m / v[i];
        int pos = upper_bound(begin(v), end(v), div) - begin(v);
        if (pos <= i) {
            break;
        }
        ans += (pos - i - 1);
    }
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    forn(tt, t)
        solve();
    return 0;
}
