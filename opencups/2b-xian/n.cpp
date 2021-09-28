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
    ll sum;
    ll x;
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            if (i == 0)
                sum = x;
            else
                sum = sum ^ x;
        }
        if (sum == 0)
            cout << "Lose" << nl;
        else
            cout << "Win" << nl;
    }
    return 0;
}
