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

ll gcdd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll nok(ll a, ll b) {
	return a / gcdd(a, b) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	ll n;
	cin >> n;
	vector<ll> v(n);
	for (ll& i : v)
		cin >> i;
	
	ll ans = v[0]; 
	for (int i = 1; i < n; ++i) {
		ans = nok(ans, v[i]);	
	}

	cout << ans << nl;
    return 0;
}
