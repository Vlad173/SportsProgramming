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

ll gcd_e(ll a, ll b, ll &x, ll &y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	ll x1, y1;
	ll d = gcd_e(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

void solve() {
	ll a, b, c;
	cin >> a >> b >> c;

	ll x, y;
	ll g = gcd_e(a, b, x, y);
	if (c % g != 0) {
		cout << -1 << nl;
		return;
	}
	x *= c / g;
	y *= c / g;
	if (a < 0)
		x *= -1;
	if (b < 0)
		y *= -1;
	cout << g << " " << x << " " << y << nl;
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
