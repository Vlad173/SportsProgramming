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
    char c;
    ll l = -1;
    ll r = 1e9 + 1;
    while (l + 1 < r) {
        ll m = (l + r) / 2;
        cout << m << endl;
        cout.flush();
        cin >> c;
        if (c == '<')
            l = m;
        else if (c == '>')
            r = m;
        else
            break;
    }
    return 0;
}
