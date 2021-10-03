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
    vector<int> v(n);
    vector<bool> s(n + 1, false);
    bool flag = false;
    for (int& i : v)
    {
        cin >> i;
        if (i > n || s[i]) {
            cout << -1 << nl;
            return 0;
        }
        if (i > 0)
            s[i] = true;
    }
    
    int m = 1;
    for (int& i : v) {
        if (i == 0) {
            while (s[m])
                ++m;
            cout << m << " ";
            s[m++] = true;
        }
        else {
            cout << i << " ";
        }
    }
    cout << nl;
    return 0;
}
