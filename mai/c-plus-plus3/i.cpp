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
    
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int& i : v)
        cin >> i;

    sort(rbegin(v), rend(v));
    
    ll ans = 0;
    int got = 0;
//    if (k > n)
//    {
//        cout << accumulate(begin(v), end(v), ans) << nl;
//        return 0;
//    }
    for (int i = 0; i < n; ++i) {
        if (got == k - 1)
            got = 0;
        else {
            ++got; 
            ans += v[i];
        }
    }
    cout << ans << nl;
    return 0;
}
