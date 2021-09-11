#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <limits>
 
using namespace std;
#define forn(i, n) for (int i = 0; i < n; ++i)
 
vector<uint64_t> hashes(string& str)
{
    vector<uint64_t> result(str.size());
    uint64_t p = 29;
    result[0] = str[0] - 'a' + 1;
    int p_pow = 29;
    for (int i = 1; i < str.size(); ++i)
    {
        result[i] = result[i - 1] + (str[i] - 'a' + 1) * p_pow; 
        p_pow = (p_pow * p);
    }
    return result;  
}
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    map<string, vector<uint64_t>> st;
    int t;
    cin >> t;
    forn(tt, t)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 1)
        {
            string s;
            cin >> s;
            vector<uint64_t> h = hashes(s);
            st[s] = h;
        }
        else if (cmd == 2)
        {
            string s;
            cin >> s;
            st.erase(s);
        }
        if (cmd == 3)
        {
            int k;
            cin >> k;
            set<uint64_t> prefix;
            for (auto& i : st)
            {
                if (k > i.second.size())
                    continue;
                prefix.insert(i.second[k - 1]);
            }
            cout << prefix.size() << '\n';
        }
    }
    return 0;
}
