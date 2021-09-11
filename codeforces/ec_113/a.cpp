#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        string s;
        cin >> s; 
        if (s.size() < 2)
        {
            cout << -1 << " " << -1 << endl;
            continue;
        }
        int pos = s.find("ab");
        if (pos == -1)
            pos = s.find("ba");
        if (pos == -1)
            cout << -1 << " " << -1 << endl;
        else
            cout << pos + 1 << " " << pos + 2 << endl;
    } 
    return 0;
}
