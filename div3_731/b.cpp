// Алфавитные строки

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;    
    for (int j = 0; j < t; ++j)
    {
        cin >> s;
        int size = s.size();
        int i = 0;
        int left = 0, right = size - 1;
        while (i != size)
        {
            if (left == right && s[left] != 'a')
            {
                cout << "NO" << endl;
                break;
            }
            if (s[left] == 'a' + size - 1 - i)
                ++left;
            else if (s[right] == 'a' + size - 1 - i)
                --right;
            else
            {
                cout << "NO" << endl;
                break;
            }
            ++i;
        }
        if (i == size)
            cout << "YES" << endl;
    }
    return 0;
}
