// Кто напротив

#include <iostream>

#define forn(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
    int t;
    cin >> t;

    forn(tt, t)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int count = abs(a - b) * 2;
        if (c > count || b > count || a > count)
        {
            cout << -1 << endl;
        }
        else
        {
            int res = count / 2 + c;
            if (res > count)
                res -= count;
            cout << res << endl;
        }         

    }
    return 0;
}
