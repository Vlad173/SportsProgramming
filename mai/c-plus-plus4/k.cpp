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

	multiset<int> l, r;
	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (l.empty() || x <= *--end(l)) {
			l.insert(x);
		} else {
			r.insert(x);
		}
		if ((int)r.size() - (int)l.size() > 0) {
			l.insert(*begin(r));
			r.erase(begin(r));	
		}
		if ((int)l.size() - (int)r.size() > 1) {
			r.insert(*--end(l));
			l.erase(--end(l));
		}
		cout << *--end(l) << nl;
	}
    return 0;
}
