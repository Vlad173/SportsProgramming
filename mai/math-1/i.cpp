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
 
vector<pair<bool, uint16_t>> sieve(int n)
{
    vector<pair<bool, uint16_t>> s(n + 1, {true, 0});
    s[0].first = false;
    s[1].first = false;
    for (ll i = 2; i < n; ++i) {
		if (s[i].first) { 
            for (ll j = i + i; j <= n; j += i) {
                s[j].first = false;
                if (s[j].first == false)
					++s[j].second;
            }
		}
    }
	return s;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    vector<pair<bool, uint16_t>> v = sieve(4 * 1e7);
 
	int n;
	int x;
	cin >> n;	
 
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x == 1)
			cout << 0 << nl;
		else if (v[x].first) {
			cout << "Prime" << nl;
		} else {
			cout << v[x].second << nl;
		}
	}
    return 0;
}
