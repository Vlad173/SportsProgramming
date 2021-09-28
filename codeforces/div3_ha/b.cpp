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
    
    vector<pair<pair<int, int>, int>> ans;
    for (int pos = 0; pos < n; ++pos)
    {
        auto it = min_element(begin(v) + pos, end(v));
        int i = it - begin(v);
        if (i == pos)
            continue;
        int min = *it;
        //v.erase(begin(v) + i);
        //v.insert(v.begin() + pos, min);
        reverse(begin(v) + pos, it + 1);
        reverse(begin(v) + pos + 1, it + 1);
        ans.push_back({{pos + 1, i + 1}, it - v.begin() - pos});
    }
    cout << ans.size() << nl;
    for (auto& i : ans)
        cout << i.first.first << " " << i.first.second << " " << i.second << nl;
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
