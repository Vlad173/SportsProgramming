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
    vector<int> obs(n);
    for (int& i : obs)
        cin >> i;
    
    sort(begin(obs), end(obs));
    int t;
    cin >> t;
    forn(tt, t) {
        int a, b;
        cin >> a >> b;
        if (a > b)
            swap(a, b);
        int a_bound = lower_bound(begin(obs), end(obs), a) - begin(obs);
        int b_bound = upper_bound(begin(obs), end(obs), b) - begin(obs);
        cout << b_bound - a_bound << nl;
    }
    return 0;
}
