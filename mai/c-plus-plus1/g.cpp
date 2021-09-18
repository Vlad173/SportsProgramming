#include <iostream>
#include <vector>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define f0rn(i, a, n) for (int i = a; i < n; ++i)

typedef long long ll;
typedef long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long > vl;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvl;

const char nl = '\n';

long long number(long long w, long long h, long long mid)
{
    return (mid / w) * (mid / h);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, m, x, y;
    cin >> n >> m >> x >> y; 

    int q = n / x;
    int w = m / y;
  
    long long result = q * w;
    
    if (n % x != 0)
        result += w;
    if (m % y != 0)
        result += q;
    if (m % y != 0 && n % x != 0)
        ++result;
    cout << result << nl; 
    return 0;
}

