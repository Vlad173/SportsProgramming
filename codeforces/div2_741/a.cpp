#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int l, r;
        cin >> l >> r;
        int a, b;
        b = r / 2 + 1;
        if (b < l)
            b = l;
//        if (r % 2 == 0)
//        {
//            if (r / 2 >= l)
//                b = r / 2;
//            else
//                b = l;
//        }
//        else
//        {
//            if (r / 2 + 1 >= l)
//                b = r / 2 + 1;
//            else
//                b = l;
//        }
        a = b + b - 1;
        if (a > r)
            a = r;
        cout << a % b << endl;
    }
}
