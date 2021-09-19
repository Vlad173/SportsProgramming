#include <iostream>
#include <vector>
#include <set>

using namespace std;

void random(vector<char>& v, int n)
{
    set<int> pos;
    for (int i = 0; i < n; ++i)
    {
        while (1)
        {
            int x = rand() % v.size();
            if (pos.find(x) == pos.end())
            {
                pos.insert(x);
                break;
            }
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        if (pos.find(i) != pos.end())
            v[i] = '1';
        else
            v[i] = '0';
    }
}

int main()
{
    int n;
    cin >> n;
    vector<char> v(n, '1');
    char c;
    for (char &i : v)
        cout << i;
    cout << endl;
    while (cin >> c)
    {
        if (c == '+')
            return 0;


        n /= 2;
        random(v, n);
        for (char &i : v)
            cout << i;
        cout << endl;
        if (n == 1)
            n = v.size();
    }
    return 0;
}
