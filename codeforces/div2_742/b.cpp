#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;
        int xorr = (a - 1) % 4;
        if (xorr == 0)
        {
            int d = (a - 1) / 4;
            xorr = 0 + d * 4;
        }
        else if (xorr == 1)
            xorr = 1;
        else if (xorr == 2)
        {
            int d = (a - 1) / 4;
            xorr = 3 + d * 4;
        }
        else
            xorr = 0;
        
        if (xorr == b)
            cout << a << endl;
        else if ((xorr ^ a) == b)
            cout << a + 2 << endl;
        else
            cout << a + 1 << endl;
    }
    return 0;
}
