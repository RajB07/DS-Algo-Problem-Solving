// # LINK https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, i = 0;
    cin >> n;
    vector<int> a(n, 0);
    while (i < n)
        cin >> a[i++];

    int jumps = 0;
    i = 0;
    while (i < n - 1)
    {
        if (i < n - 2 && a[i + 2] == 0)
            i += 2;
        else
            i++;
        jumps++;
    }

    cout << jumps;
}
