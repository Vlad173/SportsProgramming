// Кондиционеры

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int m = 0; m < q; ++m)
    {
        int n, k;
        cin >> n >> k;
        vector<int> pos(k);
        for (int& i : pos)
            cin >> i;
        vector<int> temp(k);
        for (int& i : temp)
            cin >> i;
       
        vector<long long> c(n, INT_MAX);
        for (int i = 0; i < k; ++i)
            c[pos[i] - 1] = temp[i];

        vector<long long> L(n, INT_MAX);
        long long prev = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            prev = min(prev + 1, c[i]); 
            L[i] = prev;
        }

        vector<long long> R(n, INT_MAX);
        prev = INT_MAX;
        for (int i = n - 1; i >= 0; --i)
        {
            prev = min(prev + 1, c[i]); 
            R[i] = prev;
        }
        
        vector<int> result(n);
        for (int i = 0; i < n; ++i)
            result[i] = min(L[i], R[i]);
        for (const int& i : result)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
