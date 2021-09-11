#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<char> v;
    cin >> n;
    string s;
    cin >> s;
    for (auto c : s)
        v.push_back(c);
    sort(begin(v), end(v));
    string::iterator it = s.end();
    vector<int> ans;
    for (int i = s.size() - 1; i >= 0; --i)
    {
//      cout << "Before: " << s << endl;
        int pos = s.find(v[i]);
        reverse(s.begin(), s.begin() + pos + 1);
        ans.push_back(pos + 1);
//       cout << "Midle: " << s << endl;
        reverse(s.begin(), s.begin() + i + 1);
        ans.push_back(i + 1);
//      cout << "After: " << s << endl;
        --it;
    }
    cout << ans.size() << endl;
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}
