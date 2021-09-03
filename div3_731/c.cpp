// Парное программирование

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int k, m, n;
        cin >> k >> m >> n;
        vector<int> a(m);
        vector<int> b(n);
        vector<int> out;
        for (int& ai : a)
            cin >> ai;
        for (int& bi : b)
            cin >> bi;
        int ai = 0, bi = 0;
        while (ai != m || bi != n)
        {
            if (a[ai] <= k && ai < m)
            {
                if (a[ai] == 0)
                    ++k;
                out.push_back(a[ai]);
                ++ai;
            }
            else if (b[bi] <= k && bi < n)
            {
                if (b[bi] == 0)
                    ++k;
                out.push_back(b[bi]);
                ++bi;
            }
            else {
                cout << -1 << endl;
                break;
            }
        }
        if (ai == m && bi == n)
            for (int i : out)
                cout << i << " ";
    }
}
