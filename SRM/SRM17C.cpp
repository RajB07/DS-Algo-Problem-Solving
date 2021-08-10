// http://arena.siesgst.ac.in/contest/SRM17/problem/SRM17C


#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0, n_p, n_q, n_r, curr;
        cin >> n >> n_p >> n_q >> n_r;

        for (int i = 0; i < n; i++)
        {
            cin >> curr;
            if (n_p > 0 and curr >> 1 >= 800)
            {
                sum += 800;
                n_p--;
            }
            else if (n_q > 0 and curr >> 1 >= 400)
            {
                sum += 400;
                n_q--;
            }
            else if (n_r > 0 and curr >> 1 >= 200)
            {
                sum += 200;
                n_r--;
            }
        }
        cout << sum << endl;
    }
} 

// Alternative approch
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0, n_p, n_q, n_r, curr;
        cin >> n >> n_p >> n_q >> n_r;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n, [](int a, int b) -> int
             { return a > b; });
        for (int i = 0; i < n; i++)
        {
            curr = a[i];
            if (n_p > 0 and curr >> 1 >= 800)
            {
                sum += 800;
                n_p--;
            }
            else if (n_q > 0 and curr >> 1 >= 400)
            {
                sum += 400;
                n_q--;
            }
            else if (n_r > 0 and curr >> 1 >= 200)
            {
                sum += 200;
                n_r--;
            }
        }
        cout << sum << endl;
    }
}
*/
