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

int inf = 1e9 + 1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	int mod = 1e9 + 7;
	vector<int> a(n);
	for (int i = 0; i < n - 1; ++i) {
		cin >> a[i];
	}
	a[n] = 0;

	vector<int> dp(n + 1, inf);
	dp[0] = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= k; ++j) {
			if (i - j >= 0) {
				dp[i] = min(dp[i - j], dp[i]) + a[i - 1];
			}
		}
	}

	cout << dp[n] << nl;
	vector<int> ans;
	int i = n;
	while (i > 0) {
		ans.push_back(i);
		ll diff = dp[i] - a[i - 1];
		for (int j = k; j >= 1; --j) {
			if (diff == dp[i - j]) {
				i -= j;
				break;
			}
		}
	}
	cout << ans.size() + 1 << nl;
	cout << 0 << " ";
	for (int i = ans.size() - 1; i >= 0; --i) {
		cout << ans[i] << " ";
	}
	cout << nl;
    return 0;
}
