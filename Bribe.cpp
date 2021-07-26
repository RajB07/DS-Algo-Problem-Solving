//  link https://www.hackerrank.com/challenges/new-year-chaos/problem
#include <iostream>
#include <vector>

using namespace std;

void check(vector<int> a, int n)
{
    int bribe = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] - (i + 1) > 2)
        {
            cout << "Too chaotic" << endl;
            return;
        }
        for (int j = 0; j < i; j++)
            if (a[j] > a[i])
                bribe++;
    }
    cout << bribe << endl;
}

void check2(vector<int> a, int n)
{
    int f = 1, s = 2, t = 3, bribe = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            f = s;
            s = t;
            t++;
        }

        else if (a[i] == s)
        {
            bribe++;
            s = t;
            t++;
        }
        else if (a[i] == t)
        {
            bribe += 2;
            t++;
        }
        else
        {
            cout << "Too chaotic" << endl;
            return;
        }
    }
    cout << bribe << endl;
}
int main()
{
    int N, n, i;
    cin >> N;
    while (N--)
    {
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        // check(a,n);
        check2(a, n);
    }
}
