// Сделай степень двойки

#include <iostream>
#include <string>
#include <algorithm>
#include <limits>

#define forn(i, n) for (int i = 0; i < n; ++i)
#define N_MAX 1000000000000000000

using namespace std;

int greedy_algo(const string& n, const string& x)
{
            int i = 0, j = 0, count = 0;
            while (j < x.size())
            {
                if (i >= n.size())
                {
                    ++j;
                    ++count;
                }
                else if (n[i] == x[j])
                {
                    ++i;
                    ++j;
                }
                else
                {
                    ++i;
                    ++count;    
                }
            }
            while (i++ < n.size())
                ++count;
            return count;
}

int main()
{
    int t;
    cin >> t;
    forn(tt, t)
    {
        string n;
        cin >> n;
        long long x = 1;
        int min = INT_MAX; 
        while (x < N_MAX)
        {
            int count = greedy_algo(n, to_string(x));
            min = std::min(min, count);
            x *= 2; 
        }
        cout << min << endl;
    }
    return 0;
}

