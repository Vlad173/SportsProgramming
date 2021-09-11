#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        if (s == "237" || s == "273" || s == "27")
            cout << 2 << endl << 27 << endl;
        else if (s == "537" || s == "573" || s == "57")
            cout << 2 << endl << 57 << endl;
        else if (count(s.begin(), s.end(), '4') > 0)
            cout << 1 << endl << 4 << endl;
        else if (count(s.begin(), s.end(), '6') > 0)
            cout << 1 << endl << 6 << endl;
        else if (count(s.begin(), s.end(), '1') > 0)
            cout << 1 << endl << 1 << endl;
        else if (count(s.begin(), s.end(), '8') > 0)
            cout << 1 << endl << 8 << endl;
        else if (count(s.begin(), s.end(), '9') > 0)
            cout << 1 << endl << 9 << endl;
        else if (count(s.begin(), s.end(), '2') > 1)
            cout << 2 << endl << 22 << endl;
        else if (count(s.begin(), s.end(), '5') > 1)
            cout << 2 << endl << 55 << endl;
        else if (count(s.begin(), s.end(), '3') > 1)
            cout << 2 << endl << 33 << endl;
        else if (count(s.begin(), s.end(), '7') > 1)
            cout << 2 << endl << 77 << endl;
        else {
            size_t pos = s.find('2');
            if (pos != string::npos && pos != 0)
            {
                cout << 2 << endl << s[0] << 2 << endl;
                continue;
            }
            pos = s.find('5');
            if (pos != string::npos)
                cout << 2 << endl << s[0] << 5 << endl;
        }
    }
    return 0;
}
