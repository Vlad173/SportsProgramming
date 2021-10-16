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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	
	map<string, string> db;
	map<string, bool> online;

	string cmd;
	while (cin >> cmd) {
		if (cmd == "register") {
			string login, password;
			cin >> login >> password;
			if (db.find(login) != db.end()) {
				cout << "login already in use" << nl;
			}
			else {
				db[login] = password;
				online[login] = false;
				cout << "account created" << nl;
			}
		}
		else if (cmd == "login") {
			string login, password;
			cin >> login >> password;
			if (db.find(login) == db.end() || password != db[login]) {
				cout << "wrong account info" << nl;
			}
			else if (online[login]) {
				cout << "already logged in" << nl;
			}
			else {
				online[login] = true;
				cout << "logged in" << nl;
			}
		}
		else if (cmd == "logout") {
			string login;
			cin >> login;
			if (db.find(login) == db.end() || !online[login]) {
				cout << "incorrect operation" << nl;
			}
			else {
				cout << "logged out" << nl;
				online[login] = false;
			}
		}
	}
    return 0;
}
