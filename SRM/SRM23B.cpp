// http://arena.siesgst.ac.in/contest/SRM23/problem/SRM23B
#include <iostream>
#include <vector>
using namespace std;
#define m 1000001
int main()
{

    int t, n;

    vector<bool> a(m, true);

    for (int i = 2; i * i <= m; i++)
        if (a[i] == true)
            for (int j = i * i; j <= m; j = j + i)
                a[j] = false;

    vector<int> pairs(m, 0);
    int c = 0;
    for (int i = 3; i <= m - 2; i++)
    {
        if (a[i] == true && a[i + 2] == true)
            ++c;
        pairs[i + 2] = c;
    }
    // for (int i = 2; i < 1e6; i++)
    //     if (a[i] == true)
    //         cout << i << " ";

    cin >> t;
    while (t--)
    {
        cin >> n;

        int count = 0;

        cout << pairs[n] << endl;
    }
}
