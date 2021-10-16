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

bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it))
	   	++it;
    return !s.empty() && it == s.end();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	string s;
	stack<ll> values;

	ll v1;
	ll v2;
	while (cin >> s) {
		if (is_number(s)) {
			values.push(stoll(s));
		}
		else if (s == "+") {
			ll v2 = values.top();
			values.pop();
			ll v1 = values.top();
			values.pop();
			values.push(v1 + v2);
		}
		else if (s == "-") {
			ll v2 = values.top();
			values.pop();
			ll v1 = values.top();
			values.pop();
			values.push(v1 - v2);
		}
		else if (s == "*") {
			ll v2 = values.top();
			values.pop();
			ll v1 = values.top();
			values.pop();
			values.push(v1 * v2);
		}
	}
	
	cout << values.top() << nl;
    return 0;
}
