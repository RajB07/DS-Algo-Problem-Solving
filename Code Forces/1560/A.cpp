// https://codeforces.com/contest/1560/problem/A

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> a;
    int count = 0, i = 1;
    while (count < 1000)
    {
        if (!(i % 10 == 3 || i % 3 == 0))
        {
            a.push_back(i);
            count++;
        }
        i++;
    }
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        cout << a[k - 1] << endl;
    }
}
