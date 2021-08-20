// https://codeforces.com/contest/1520/problem/C
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 1 << endl;
        else if (n == 2)
            cout << -1 << endl;

        else
        {
            vector<vector<int>> a;

            vector<int> dummy(n, 0);
            for (int i = 0; i < n; i++)
                a.push_back(dummy);

            int s = 1, q = ceil(1.0 * n * n / 2) + 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if ((i + j) % 2)
                        a[i][j] = q++;
                    else
                        a[i][j] = s++;
                }
            }

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
        }
    }
}
