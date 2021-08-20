// https://codeforces.com/contest/1520/problem/D

#include <iostream>
#include <map>
using namespace std;

int main()
{

    long long t, n, temp, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> n;
        map<long long, long long> m;
        for (int u = 0; u < n; u++)
        {
            cin >> temp;
            temp = temp - u;
            count += m[temp]++;
        }
        cout << count << endl;
    }
}
