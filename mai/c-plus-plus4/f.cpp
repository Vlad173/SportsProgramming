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

ll my_pow(ll x, ll y, ll N) {
 	if (y == 0) 
		return 1;
  	ll z = my_pow(x, y / 2, N);
  	if (y % 2 == 0)
    	return (z * z) % N;
  	else
    	return (x * z * z) % N;
}

//ll my_pow(ll n, ll m, ll mod)
//{
//    ll res = 1;
//    ll number = n;
//    ll count = 0;
//    while (m > 0) {
//        if (m % 2 == 1) {
//			res = (res * number) % mod;
//        }
//		number = (number * number) % mod;
//        m /= 2;
//    }
//    return res % mod;
//}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	ll n, a0;
	ll mod = 1e9 + 7;
	cin >> n >> a0;

	cout << (a0 * my_pow(5, n - 1, mod)) % mod << " ";
	cout << (a0 * my_pow(5, n, mod)) % mod << nl;
    return 0;
}
