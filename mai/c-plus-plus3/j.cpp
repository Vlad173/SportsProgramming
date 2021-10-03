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
    string s1;
    cin >> s1;

    int t;
    cin >> t;
    vector<char> result(t);
    for (int i = 0; i < t; ++i) {
        int m;
        cin >> m;
        string s2;
        cin >> s2;
        int curr = 0;
        for (char& c : s1) {
            if (s2[curr] == c) {
                ++curr;
            }
            if (curr == m)
                break;
        } 
        if (curr == m)
            result[i] = '0';
        else
            result[i] = '1';
    }

    for (auto& i : result)
        cout << i;
    cout << nl;
    return 0;
}
