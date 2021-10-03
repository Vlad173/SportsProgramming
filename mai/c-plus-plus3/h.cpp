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

int n;

void gen(string s, int l, int balance) {
    if (l > 0) {
        gen(s + "(", l - 1, balance + 1);
    }
    if (balance > 0) {
        gen(s + ")", l, balance - 1);
    }
    if (balance == 0 && s.size() == n * 2)
        cout << s << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    gen("", n, 0);
    return 0;
}
