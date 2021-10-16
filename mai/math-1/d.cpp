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

vector<bool> sieve(int n) {
    vector<bool> s(n + 1, true);
    int count = 0;
    s[0] = false;
    s[1] = false;
    for (int i = 2; i * i <= n; ++i)
    {
		if (s[i]) {
            for (int j = i * i; j <= n; j += i) {
                s[j] = false;
            }
		}
    }
	return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	int n, m;
	cin >> n >> m;
	
	if (m < n) {
		cout << 0 << nl;
		return 0;
	}

	vector<bool> s = sieve(1e7 * 2);	

	ll ans = 0;
	ll count = 0;
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] == true) {
			++count;
			if (count >= n && count <= m) {
				ans += i;
			}
		}
	}
	cout << ans << nl;
    return 0;
}
