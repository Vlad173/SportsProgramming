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

int inf = 1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string apple = "Apple";
    string ipad = "iPad";
    string ipod = "iPod";
    string iphone = "iPhone";
    string sony = "Sony";

    string s;
    string t;
    while (cin >> t)
        s += t;
    
    int pos = 0;
    vector<int> mins(5);
    while (true)
    {
        mins[0] = s.find(apple, pos);
        if (mins[0] == -1)
            mins[0] = inf;
        mins[1] = s.find(ipad, pos);
        if (mins[1] == -1)
            mins[1] = inf;
        mins[2] = s.find(ipod, pos);
        if (mins[2] == -1)
            mins[2] = inf;
        mins[3] = s.find(iphone, pos);
        if (mins[3] == -1)
            mins[3] = inf;
        mins[4] = s.find(sony, pos);
        if (mins[4] == -1)
            mins[4] = inf;
        int minn = min_element(begin(mins), end(mins)) - begin(mins);
        if (mins[minn] == inf)
            break;
        if (minn == 4)
            cout << "SONY DAFA IS GOOD!" << nl;
        else
            cout << "MAI MAI MAI!" << nl;
        pos = mins[minn] + 1;
    } 
    return 0;
}
