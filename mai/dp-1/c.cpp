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
	
	int n, k, m;
	cin >> n >> k >> m;
	int mod = 1e9 + 7;
	vector<int> a(n + 1, 0);
	for (int i = 0; i < m; ++i) {
		int x;
		cin >> x;
		a[x] = 1;
	}	

	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	for (int i = 1; i <= n; ++i) {
		if (a[i])
			continue;
		for (int j = 1; j <= k; ++j) {
			if (i - j >= 0) {
				dp[i] = (dp[i] + dp[i - j]) % mod;
			}
		}
	}

	cout << dp[n] << nl;
    return 0;
}
