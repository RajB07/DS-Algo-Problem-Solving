// http://arena.siesgst.ac.in/contest/SRM22/problem/SRM22B
#include <iostream>
using namespace std;

string decto26(int x)
{
    int mod;
    string res = "";
    char map[] = {'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y'};
    while (x)
    {
        res = map[x % 26] + res;
        x = (x - 1) / 26;
    }
    return res;
}

int main()
{
    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cout << decto26(m) << endl;
    }
}
