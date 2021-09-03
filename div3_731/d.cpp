// D. Взаиморастущая последовательность

#include <iostream>
#include <vector>

using namespace std;

int reverse(int a)
{
    int r = 0;
    while (a)
    {
        r *= 2;
        r += a % 2;
        a /= 2;
    }
    return r;
}

int main()
{
    int t;
    cin >> t;
   
    for (int j = 0; j < t; ++j)
    {
        int n;
        cin >> n;
        vector<int> x(n);
        for (int& i : x)
            cin >> i;
        vector<int> y(n);
        y[0] = 0;
        int prev = (x[0] ^ 0);
        for (int i = 1; i < n; ++i)
        {
            int pt = prev;
            int xt = x[i];
            int count = 0;
            while (pt)
            {
                y[i] *= 2;
                int bit1 = pt % 2;
                int bit2 = xt % 2;
                if (bit1 == 0)
                {
                    y[i] += 0;
                    if (y[i] == 0)
                        ++count;
                }
                else
                {
                    y[i] += (bit1 != bit2);
                    if (y[i] == 0)
                        ++count;
                }
                pt /= 2;
                xt /= 2;
            }
            y[i] = reverse(y[i]);
            while (count)
            {
                y[i] *= 2;
                --count;
            }
            prev = (x[i] ^ y[i]);
        }
        for (int i : y)
            cout << i << " ";
        cout << endl;
    }
}
