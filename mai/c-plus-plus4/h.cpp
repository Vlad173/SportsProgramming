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
	
	int n;
	cin >> n;
	int a, m, k, mod;
	int m9 = 1e9 + 7;
	cin >> a >> m >> k >> mod;

	vector<int> count(mod, 0);
	for (int i = 0; i < n; ++i){
		++count[a];
    	a = (a * m + k) % mod;
	}
	
	vector<int> v;
	for (int i = 0; i < mod; ++i) {
		while (count[i] > 0) {
			v.push_back(i);
			--count[i];
		}
	}

	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		ans = (ans + ((i + 1) * v[i]) % m9) % m9; 
	}
	cout << ans << nl;
    return 0;
}
