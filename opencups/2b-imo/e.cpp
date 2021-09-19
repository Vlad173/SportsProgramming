#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <string>

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

    cout << "? " << n << " ";
    f0rn(i, 0, n)
        cout << i + 1 << " ";
    cout << endl;
    ll all;
    cin >> all;

    forn(tt, 29)
    {
        set<int> l; 
        for (int i = 0; i < n / 2; ++i)
        {
            while (1)
            {
                int x = rand() % n + 1;
                if (l.find(x) == l.end())
                {
                    l.insert(x);
                    break;
                }
            }
        }
        cout << "? " << n / 2 << " ";
        for (auto& i : l)
            cout << i << " ";
        cout << endl;
        ll half1;
        cin >> half1;


        cout << "? " << n - (n / 2) << " ";
        for (int i = 1; i <= n; ++i)
        {
            if (l.find(i) == l.end())
                cout << i << " ";
        }
        cout << endl;
        ll half2;
        cin >> half2;

        if ((all - half1 - half2) % 2 != 0)
        {
            cout << "! NO " << endl;
            return 0;
        }
            

    }
    cout << "! YES" << endl;
    return 0;
}
