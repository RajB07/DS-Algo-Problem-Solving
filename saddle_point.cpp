#include <iostream>
using namespace std;

int main()
{
    int n, i, j, m, status = 1;

    cin >> n;
    int a[n][n] = {};
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    for (i = 0; i < n; i++)
    {
        int min = a[i][0], min_col = 0;
        for (j = 1; j < n; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                min_col = j;
            }
        }

        for (j = 0; j < n; j++)
        {
            if (a[j][min_col] > min)
            {
                status = 0;
                break;
            }
            else
            {
                status = 1;
            }
        }
        if (status)
        {
            cout << "Saddle point " << min;
            break;
            cout << "ashdgavghdsfa";
        }
    }
    if (!status)
    {
        cout << "No saddle Point";
    }
}