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

	int l, r;
	cin >> l >> r;
	int mod = 1e9 + 7;

	vi dp(r + 1, 0);
	dp[1] = 1;
	for (int i = 1; i <= r; ++i) {
		for (int j = 2; i * j <= r; ++j) {
			dp[i * j] = (dp[i * j] + dp[i]) % mod;
		} 
	}

	int answer = 0;
	for (int i = l; i <= r; ++i) {
		answer = (answer + dp[i]) % mod;
	}
	cout << answer << nl;
    return 0;
}
