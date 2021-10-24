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
    ll n;
    cin >> n;

    ll dp[n + 1];
    dp[1] = 0;
    for (int i = 2; i < n + 1; ++i)
    {
        dp[i] = dp[i - 1];
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2]);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3]);
        ++dp[i];
    }
	vector<ll> rec;
    int i = n;
    while (i > 0)
    {
        rec.push_back(i);
        int diff = dp[i] - 1;
        if (i % 3 == 0 && diff == dp[i / 3])
            i /= 3;
        else if (i % 2 == 0 && diff == dp[i / 2])
            i /= 2;
        else
            --i;
    }
	ll ans = 0;
    for (int i = rec.size() - 1; i >= 0; --i)
		ans += rec[i];
    cout << --ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    forn(tt, t)
        solve();
    return 0;
}
