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
    int n, m, k;
	int mod = 1e9 + 7;
    cin >> n >> m >> k;
	++n; ++m;
    vector<vector<int>> obstacles(n, vector<int> (m, 0));
	for (int i = 0; i < k; ++i) {
		int x, y;
		cin >> x >> y;
		obstacles[x][y] = 1;
	}

    vector<vector<int>> dp(n + 1, vector<int> (m + 1, 0));
	dp[0][1] = 1;
    for (int i = 1; i < n + 1; ++i) {
		for (int j = 1; j < m + 1; ++j) {
			if (obstacles[i - 1][j - 1] == 1) {
				continue;
			}
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
		}
	}

    cout << dp[n][m] << endl;
    return 0;
}
