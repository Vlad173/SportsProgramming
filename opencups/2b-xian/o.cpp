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
    
    vector<int> a(6);
    vector<int> b(6);
    int x1, x2, x3, x4, x5, x6;
    bool flag = false;
    while (cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6)
    {
        int cnt = 0;
        a = {x1, x2, x3, x4, x5, x6};
        cin >> x1 >> x2 >> x3 >> x4 >> x5 >> x6;
        b = {x1, x2, x3, x4, x5, x6};

        auto i0 = find(begin(b), end(b), a[0]) - begin(b);
        auto i2 = find(begin(b), end(b), a[2]) - begin(b);
        auto i4 = find(begin(b), end(b), a[4]) - begin(b);

        int p = 0, n = 0;
        if (i0 != 0) 
        {
            ++n;
        }
        if (i2 != 2) 
        {
            ++n;
        }
        if (i4 != 4) 
        {
            ++n;
        }
        
        if (i0 % 2 != 0)
            ++p; 
        if (i2 % 2 != 0)
            ++p; 
        if (i4 % 2 != 0)
            ++p; 
        if (n % 2 + p % 2 != 1 && (n + p != 0))
        {
            cout << -1 << nl;
            continue;
        }
        vector<int> v1(3);
        vector<int> v2(3);
        v1[0] = a[0] + a[1];
        v2[0] = b[0] + b[1];
        v1[1] = a[2] + a[3];
        v2[1] = b[2] + b[3];
        v1[2] = a[4] + a[5];
        v2[2] = b[4] + b[5];
        sort(begin(v1), end(v1));
        sort(begin(v2), end(v2));
        flag = false;
        for (int i = 0; i < 3; ++i)
        {
            if (v1[i] != v2[i])
            {
                cout << -1 << nl;
                flag = true;
                break;
            }
        }
        if (flag)
            continue;
        if(a[2] == b[4])
        {
            flag = true;
            if (a[4] == b[0] && a[0] == b[2])
            {
                b[4] = b[0];
                b[5] = b[1];
                b[0] = 4;
                b[1] = 3;
                cnt++;
            }
            else
            {
                b[4] = b[1];
                b[5] = b[0];
                b[0] = 3;
                b[1] = 4;
                cnt++;
            }
        }
        else if (a[2] == b[5])
        {
            flag = true;
            b[4] = b[0];
            b[5] = b[1];
            b[0] = 3;
            b[1] = 4;
            cnt++;
        }
        if (a[2] == b[3])
        {
            flag = true;
            cnt++;
            b[2] = b[0];
            b[3] = b[1];
            b[0] = 3;
            b[1] = 4;
        }

        if(a[2] == b[0])
        {
            flag = true;
            cnt++;
            b[0] = b[3];
            b[1] = b[2];
            b[2] = 3;
            b[3] = 4;
        }
        else if (a[2] == b[1])
        {
            flag = true;
            cnt++;
            b[0] = b[2];
            b[1] = b[3];
            b[2] = 3;
            b[3] = 4;
        }

        if (b[2] == a[2])
        {
            flag = true;
            if (a[0] == b[0])
            {
                cnt += 0;
            }
            else if (a[0] == b[4] || a[0] == b[5])
            {
                cnt+=1;
            }
            else
            {
                cnt+=2;
            }
        }
        if (cnt == 0 && !flag)
            cout << -1 << '\n';
        else
            cout << cnt << '\n';
    }
    return 0;
}
