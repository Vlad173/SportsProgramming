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

    vector<int> ans(5, 0);
    while (n != 0)
    {
        if (n - 5000 >= 0)
        {
            ++ans[4];
            n -= 5000;
        }
        else if (n - 1000 >= 0)
        {
            ++ans[3];
            n -= 1000;
        }
        else if (n - 500 >= 0)
        {
            ++ans[2];
            n -= 500;
        }
        else if (n - 200 >= 0)
        {
            ++ans[1];
            n -= 200;
        }
        else if (n - 100 >= 0)
        {
            ++ans[0];
            n -= 100;
        }
    }

    for (int& i : ans)
        cout << i << " ";
    cout << nl;
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
