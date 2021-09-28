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
    string s;
    cin >> s;
    ll counta = count(begin(s), end(s), 'A');
    ll countb = count(begin(s), end(s), 'B');
    ll countc = count(begin(s), end(s), 'C');
    if ((counta + countc) == countb)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    forn(tt, t)
        solve();
    return 0;
}
