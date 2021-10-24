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
	string s1, s2;
	for (int i = 0; i < n; ++i) {
		cin >> s1 >> s2;
	}
	
	cin >> s1 >> s2;

	if (s1.size() < s2.size()) {
		int diff = s2.size() - s1.size();
		for (int i = 0; i < diff; ++i) {
			s1 += '`';
		}
	}

	if (s1.size() > s2.size()) {
		int diff = s1.size() - s2.size();
		for (int i = 0; i < diff; ++i) {
			s2 += '`';
		}
	}
	ll ans = 0;
	for (int i = 0; i < s1.size(); ++i) {
		ans += s2[i] - s1[i];
	}
	cout << ans << nl;
    return 0;
}
