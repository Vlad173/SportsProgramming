#include <iostream>

#define forn(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    if (abs(a + b) == 0)
        cout << 1 << endl;
    else
        cout << k + 1 << endl; 
    return 0;
}
