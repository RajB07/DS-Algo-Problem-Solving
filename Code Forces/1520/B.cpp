// https://codeforces.com/contest/1520/problem/B

#include <iostream>

using namespace std;

int main()
{
    long long int t, n, sum = 0;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        for (long long int i = 1; i < 10; i++)
            for (long long int j = i; j <= n; j = j * 10 + i)
                sum++;
        cout << sum << endl;
    }
}
