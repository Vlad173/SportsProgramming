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
 
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& i : v)
        cin >> i;
 
    long long count = 0;
    while (!is_sorted(begin(v), end(v)))
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                ++count;
            }
        }
    }
    cout << count << nl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    forn(tt, t)
        solve();
    return 0;
}
