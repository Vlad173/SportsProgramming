#include <iostream>

using namespace std;

int main()
{
    int m, i;
    int p, t;
    cin >> m >> i >> p >> t;
    int w;
    cin >> w;
    long long r = abs(m - p) + abs(t - i);
    if (r > w)
        cout << "N" << endl;
    else {
        if ((w - r) % 2 == 0)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
