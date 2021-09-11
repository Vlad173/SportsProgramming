#include <iostream>

#define forn(i, n) for (int i = 0; i < n; ++i)

using namespace std;

int main()
{
    int t;
    cin >> t;

    forn(tt, t)
    {
        int k;
        cin >> k;
        int i = 1;
        int length = 1;
        while (k - i > 0)
        {
            k -= i;
            i += 2;
            ++length;
        }
        if (k > length)
        {
            int temp = length;
            length -= (k - length);
            k = temp;
        }
        cout << k << " " << length << endl;
    }
    return 0;
}
