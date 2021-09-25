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

int sym(int v)
{
    if (v < 10)
        return v + '0';
    return v - 10 + 'a';
}

int val(char c)
{
    if (isdigit(c))
        return c - '0';
    return c - 'a' + 10;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    ll n = 0;
    for (int i = 0; i < s.size(); ++i)
        n = n * a + val(s[i]);
    
    string res;
    if (n == 0)
        res = "0";
    while (n != 0)
    {
        res += sym(n % b);
        n /= b;
    }
    reverse(begin(res), end(res));
    cout << res << nl;
    return 0;
}
