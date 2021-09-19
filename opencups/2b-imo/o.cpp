#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

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

int main(int argc, char *argv[])
{
  string s1;
  cin >> s1;
  
  string s2 = "0123456789";

  ll i1;
  stringstream ss(s1);
  ss >> i1;

  ll ten = 1;
  int n = s1.size();
  forn(i,n) ten *= 10;

  ll ans;
  ll d = -1;
  
  do{
    ll i2 = 0;
    forn(i, n) i2 = i2 * 10 + s2[i] - '0';    
    ll ev = min(abs(i1 - i2), ten - abs(i1 - i2));
    if(ev > d){
      d = ev;
      ans = i2;
    }
  } while (next_permutation(begin(s2), end(s2)));
 
  string out;
  while (ans) {
    out += ans % 10 + '0';
    ans /= 10;
  }
 
  if (out.size() < n)
      out += '0';
  reverse(begin(out), end(out));
  cout << out << endl;
  
  return 0;
}
