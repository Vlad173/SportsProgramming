#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)
#define f0rn(i, a, n) for (int i = a; i < n; ++i)

typedef long long ll;
typedef double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long long > vl;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvl;

const char nl = '\n';

bool is_open(char c) {
    return c == '(' || c == '{' || c == '[';
}

bool is_close(char c) {
    return c == ')' || c == '}' || c == ']';
}

char reverse(char c) {
    if (c == ']' || c == '}')
        c -= 2;
    else
        --c;
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;    
    stack<char> st;
    for (int i = 0; i < n; ++i)
    {
        char c;
        cin >> c;
        
        if (is_open(c))
            st.push(c);
        else {
            if (st.empty()) {
                cout << "Nein" << nl;
                return 0;
            }
            if (st.top() == reverse(c))
                st.pop();
        }
    }
    if (st.empty())
        cout << "Ja" << nl;
    else
        cout << "Nein" << nl;
    return 0;
}
