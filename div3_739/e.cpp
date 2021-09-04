#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)

int count_of_delets(string& s, const map<char, int>& m)
{
    int i = s.size() - 1;
    char first = s[i];
    int count1 = 0;
    while (i >= 0 && s[i] == first)
    {
        --i;
        ++count1;
    }
    char second = s[i];
    int count = 0;
    while (i >= 0 && (s[i] == second || s[i] == first))
    {
        if (s[i] == first)
            ++count;
         --i;
    }
    if (count == 0)
        count = m.at(first) / count1;
    else 
        count = m.at(first) / count;
    return count;
}

bool is_find(const char& curr, const string& chars)
{
    return find(begin(chars), end(chars), curr) != end(chars); 
}

bool check_counts(const map<char, int>& l, const map<char, int>& r)
{
    for (auto& i : l)
    {
        if (r.at(i.first)   < i.second)
        {
            return false;
        }
    }
    return true;
}

void change_map(map<char, int>& m, const string& s, int count)
{
    int i = 0;
    for (char c : s)
        m[c] /= count - i++;
}

bool is_clear(const map<char, int>& m)
{
    for (auto& p : m)
    {
        if (p.second != 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;

    forn(tt, t)
    {
        string s;
        cin >> s;
        map<char, int> counts;
        for (char c : s)
            ++counts[c];
        int count = count_of_delets(s, counts);
        int i = s.size() - 1; 
        string chars;
        forn (cc, count)
        {
            char curr = s[i];
            chars.push_back(s[i]); 
            while (i >= 0 && is_find(curr, chars))
                curr = s[--i];
        }
        change_map(counts, chars, count);
        int sum = 0;
        for (auto& p : counts)
            sum += p.second;
//        for (i = 0; i < sum; ++i)
//        {
//            if (counts.find(s[i]) != counts.end())
//                --counts[s[i]];
//            //if (is_clear(counts))
//             //   break;
//        }
        string ans = s.substr(0, sum);
        string ss = ans;
        string test;
        reverse(begin(chars), end(chars));
        for (char c : chars)
        {
            test += ss;
            ss.erase(std::remove(ss.begin(), ss.end(), c), ss.end());
        }
        if (test != s || !ss.empty())
            cout << -1 << endl;
        else 
            cout << ans << " " << chars << endl;
    }       
    return 0;
}
