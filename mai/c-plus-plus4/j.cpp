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
	vector<int> v(n);
	for (int& i : v)
		cin >> i;

	sort(begin(v), end(v));

	ll ans = 0;
	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			ans += lower_bound(begin(v) + j + 1, end(v), v[i] + v[j]) - begin(v) - j - 1;
		}
	}
	
	cout << ans << nl;
    return 0;
}
