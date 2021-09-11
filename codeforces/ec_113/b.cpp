#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        int last = -1;
        vector<int> pos;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '2')
            {
                ++count;
                pos.push_back(i);
            }
        }
        if (count == 1 || count == 2)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int temp = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '1')
            {
                for (int j = 0; j < s.size(); ++j)
                {
                    if (j != i)
                        cout << "=";
                    else
                        cout << "X";
                }
                cout << endl;
            }
            else if (s[i] == '2')
            {
                for (int j = 0; j < s.size(); ++j)
                {
                    if (j == i)
                        cout << "X";
                    else if (temp == 0 && j == pos[count - 1])
                        cout << "-";
                    else if (temp < count - 1 && j == pos[temp + 1])
                        cout << "+";
                    else if (temp > 0 && j == pos[temp - 1])
                        cout << "-";
                    else if (temp == count - 1 && j == pos[0])
                        cout << "+";
                    else
                        cout << "=";
                }
                cout << endl;
                ++temp;
            } 
        }
    }
}
