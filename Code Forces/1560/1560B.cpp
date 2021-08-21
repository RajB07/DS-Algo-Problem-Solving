#include <iostream>
using namespace std;
int main()
{
    int t;
    int a, b, c, half_n, n;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        half_n = abs(a - b);
        n = 2 * half_n;

        if (a > n || b > n || c > n)
            cout << -1 << endl;
        else
        {
            cout << (c + half_n <= n ? c + half_n : c - half_n) << endl;
        }
    }
}