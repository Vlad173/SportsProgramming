#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)

bool is_beatiful(int kk, int i)
{
    string k = to_string(i); 
    set<char> st;
    for (const char& c : k)
        st.insert(c);
    if (st.size() > kk)
        return false;
    return true;
}

int main()
{
    int t;
    cin >> t;

    forn(tt, t)
    {
        int n, k;
        cin >> n >> k;
        for (int i = n; i <= 1111111111; ++i)
        {
            if (is_beatiful(k, i))
            {
               cout << i << endl; 
               break;
            }       
        }
    }
    return 0;
}
