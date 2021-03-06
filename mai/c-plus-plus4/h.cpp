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
	
	ll n;
	cin >> n;
	ll a, m, k, mod;
	ll m9 = 1e9 + 7;
	cin >> a >> m >> k >> mod;

	vector<ll> count(mod, 0);
	for (ll i = 0; i < n; ++i){
		++count[a];
    	a = (a * m + k) % mod;
	}
	
	ll ans = 0;
	ll i = 0;
	for (ll j = 0; j < mod; ++j) {
		while (count[j] > 0) {
			ans = (ans + ((i + 1)) * j) % m9;
			++i;
			--count[j];
		}
	}
	cout << ans << nl;
    return 0;
}
