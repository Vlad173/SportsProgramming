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
    
    set<pair<int, int>> mans;    
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 0)
            continue;
        mans.insert({v[i], i});
    }
  
    vector<pair<int, int>> ans; 
    while (mans.size() > 1)
    {
        auto first = begin(mans);
        auto last = --end(mans);
        auto vfirst = *first;
        auto vlast = *last;
        mans.erase(first);
        mans.erase(last);
        if (vfirst.first > 1)
        {
            --vfirst.first;
            mans.insert(vfirst);
        }
        if (vlast.first > 1)
        {
            --vlast.first;
            mans.insert(vlast);
        }
        ans.push_back({vfirst.second + 1, vlast.second + 1});
    }

    cout << ans.size() << nl;
    for (auto& i : ans)
        cout << i.first << " " << i.second << nl;
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
