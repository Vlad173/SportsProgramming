#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <limits>
 
using namespace std;
#define forn(i, n) for (int i = 0; i < n; ++i)

vector<long long> hashes(string& str)
{
    vector<long long> result(str.size());
    long long p = 257;
    result[0] = str[0] - 'a' + 1;
    long long p_pow = 257;
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
    map<string, vector<long long>> st;
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
            vector<long long> h = hashes(s);
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
            set<long long> prefix;
            for (auto& i : st)
                prefix.insert(i.second[k - 1]);
            cout << prefix.size() << '\n';
        }
    }
    return 0;
}
