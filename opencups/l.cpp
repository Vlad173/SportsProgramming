#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n <= m)
    {
        cout << 0 << endl;
    }
    else if (m * 2 > n)
    {
        
        cout << n % 2 + 1 << endl;

        cout << "OK" << endl;
    }
    else
    {
        int count = 0;
        
        count += n / m + (n % m == 0);
        cout << count << endl;
        if (n % m != 0)
            count += (n - n / m) / 2;
        cout << count << endl;
    }
    return 0;


}
