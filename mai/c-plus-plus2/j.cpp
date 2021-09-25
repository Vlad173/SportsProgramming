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
    for (int& i : v)
        cin >> i;

    if (n == 1)
    {
        cout << 1 << " " << 1 << nl;
        cout << 1 << " " << 1 << nl;
        cout << 1 << " " << 1 << nl;
        return 0;
    }

    vector<int> mins;
    vector<int> maxs;
    for (int i = 0; i < v.size(); ++i)
    {
        if (i == 0)
        {
            if (v[0] < v[1])
                mins.push_back(i + 1);
            else if (v[0] > v[1])
                maxs.push_back(i + 1);
        } 
        else if (i == v.size() - 1)
        {
            if (v[i] > v[i - 1])
                maxs.push_back(i + 1);
            else if (v[i] < v[i - 1])
                mins.push_back(i + 1);
        }
        else
        {
            if (v[i] > v[i - 1] && v[i] > v[i + 1])
                maxs.push_back(i + 1);
            else if (v[i] < v[i - 1] && v[i] < v[i + 1])
                mins.push_back(i + 1);
        }
    } 

    cout << mins.size() << " ";
    for (auto& i : mins)
        cout << i << " ";
    cout << nl;

    cout << maxs.size() << " ";
    for (auto& i : maxs)
        cout << i << " ";
    cout << nl;

    const auto [min, max] = std::minmax_element(begin(v), end(v));
    cout << min - v.begin() + 1 << " " << max - v.begin() + 1 << nl;

    return 0;
}
