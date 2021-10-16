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

	ll ans = 0;
	for (ll i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
            if (n / i != i) {
                ans++;
            }
            ans++;
        }
	}
	cout << ans << nl;
    return 0;
}
