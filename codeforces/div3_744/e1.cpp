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
    deque<int> d;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    
    deque<int> min_d;
    while(!d.empty())
    {
        int x = d.front();
        d.pop_front();
        if (min_d.empty())
        {
            min_d.push_back(x);
            continue;
        }
        if (x < min_d.front())
            min_d.push_front(x); 
        else
           min_d.push_back(x); 
    }

    for (auto& i : min_d)
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
