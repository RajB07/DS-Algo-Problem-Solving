// https://codeforces.com/contest/1560/problem/C
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int t, temp, n, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n;
        temp = sqrt(n);
        temp = temp * temp;
        x = sqrt(n), y = 1;
        if (temp == n)
            cout << x << " " << y << endl;
        else
        {
            y = x + 1, x = 0;

            while (temp < n)
            {
                temp++;
                if (x < y)
                    x++;
                else
                    y--;
            }
            cout << x << " " << y << endl;
        }
    }
}
