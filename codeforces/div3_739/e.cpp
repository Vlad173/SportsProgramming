#include <iostream>
#include <map>
#include <string>
#include <algorithm>

#define forn(i, n) for (int i = 0; i < n; ++i)

using namespace std;

void change_map(map<char, int>& counts, const string& chars, int count)
{
    int i = 0;
    for (char c : chars)
        counts[c] /= count - i++;
}

int main()
{
    int t;
    cin >> t;

    forn(tt, t)
    {
        map<char, int> counts;
        string text;
        cin >> text;
        for (const char& c : text)
            ++counts[c];
        string chars;
        for (int i = text.size() - 1; i >= 0; --i) 
            if (find(begin(chars), end(chars), text[i]) == end(chars))
                chars.push_back(text[i]);
        change_map(counts, chars, chars.size());
        reverse(chars.begin(), chars.end());
        int sum = 0;
        for (auto& p : counts)
            sum += p.second;
        string ans = text.substr(0, sum);
        string ss = ans;
        string test;
        for (char c : chars)
        {
            test += ss;
            ss.erase(std::remove(ss.begin(), ss.end(), c), ss.end());
        }
        if (test != text || !ss.empty())
            cout << -1 << endl;
        else 
            cout << ans << " " << chars << endl;
    }
    return 0;
}
