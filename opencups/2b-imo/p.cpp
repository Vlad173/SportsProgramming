#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    int l = 0;
    
    cin >> n;
    vector <char> vct(n, 'i');
    vector help(n + 1, 0);
    for (char& i : vct)
        cin >> i;
    
    for (int i = 0; i < n; ++i) {
        if (vct[i] == vct[i + 1])
            ++help[l];
        else
        {
            ++help[l];
            ++l;
        }
    }

    if (vct[0] == '<' && vct[n - 1] == '>')
        cout <<  n - min(help[0], help[l - 1]) << endl;
    if (vct[0] == vct[n - 1])
        cout << n << endl;
    if (vct[0] == '>' && vct[n - 1] == '<')
        cout << n << endl;;
    return 0;
}
