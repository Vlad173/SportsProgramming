#include <iostream>
#include <algorithm>
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
        if (s.find('U') != -1)
            replace(begin(s), end(s), 'U', 'D');
        else if (s.find('D') != -1)
            replace(begin(s), end(s), 'D', 'U');
        cout << s << endl;
    } 

    return 0;
}
