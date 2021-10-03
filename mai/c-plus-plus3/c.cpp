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

struct team {
    string name;
    int count;
    int fine;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<team> v(n);
    for (auto& i : v)
        cin >> i.name >> i.count >> i.fine;

    sort(begin(v), end(v), [](const team& lhs, const team& rhs) {
        if (lhs.count != rhs.count)
            return lhs.count > rhs.count;
        if (lhs.fine != rhs.fine)
            return lhs.fine < rhs.fine;
        return lhs.name < rhs.name;
    });

    for (auto& i : v) {
        cout << i.name << nl;
    }
    return 0;
}
