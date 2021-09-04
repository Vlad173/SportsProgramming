// Нелюбовь к тройкам

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
        
        int i; 
        for (i = 1; i <= 1666; ++i)
        {
            if (!(i % 3 == 0 || i % 10 == 3))
               --k;
            if (k == 0)
                break;
        }
        cout << i << endl;
    } 
    return 0;
}
