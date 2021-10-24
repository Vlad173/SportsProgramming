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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	ll n, a0;
	ll mod = 1e9 + 7;
	cin >> n >> a0;
	
	ll ai, max1 = -1, max2 = -1;	
	for (int i = 1; i <= n; ++i) {
		a0 = (a0 * 5) % mod;
		if (a0 > max1) {
			max2 = max1;
			max1 = a0;
		}
		if (a0 > max2 && a0 < max1) {
			max2 = a0;
		}
	}
	cout << max2 << " " << max1 << nl;
    return 0;
}
