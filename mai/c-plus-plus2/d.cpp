#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    int mod = 1e9 + 7;
    long long ans = 1;
    for (int i = 2; i <= n; ++i)
    {
        ans = (i * ans) % mod;
        if (i >= mod)
            break;
    }
    cout << ans << '\n';
    return 0;
}
