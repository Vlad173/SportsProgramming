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
	for (int i = 1; i < n; ++i) {
		if (v[i] - 1 != v[i - 1]) {
			cout << "Scammed" << nl;
			return 0;
		}
	}	
	cout << "Deck looks good" << nl;
    return 0;
}
