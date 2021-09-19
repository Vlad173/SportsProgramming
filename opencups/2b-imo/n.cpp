#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int j = 0;
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 0; i < t.size(); ++i)
    {
        if (t[i] == s[j])
        {
            ++cnt;
            j += 2;
        }
    }
    j = 1;
    for (int i = 0; i < t.size(); ++i)
    {
        if (t[i] == s[j])
        {
            ++cnt2;
            j += 2;
        }
    }
    if (s.size() % 2 == 0 && (cnt == s.size() / 2 || cnt2 == s.size() / 2))
        cout << "Yes";
    else if (s.size() % 2 == 1 && (cnt == s.size() / 2 || cnt == s.size() / 2 + 1
                || cnt2 == s.size() / 2 || cnt2 == s.size() / 2 + 1))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
