// http://arena.siesgst.ac.in/contest/SRM23/problem/SRM23C
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    int t;
    int gcd1, gcd2, moves1, moves2, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        moves1 = min(a, b);
        moves2 = min(c, d);
        gcd1 = abs(a - b);
        gcd2 = abs(c - d);
        int i1 = 0, i2 = 0;
        while (i1 < moves1)
        {
            if (gcd(a + i1, b + i1) == gcd1)
                break;
            if (gcd(a - i1, b - i1) == gcd1)
                break;
            i1++;
        }
        while (i2 < moves2)
        {
            if (gcd(c - i2, d - i2) == gcd2)
                break;
            if (gcd(c + i2, d + i2) == gcd2)
                break;
            i2++;
        }
        string chr = (gcd1 - i1 == gcd2 - i2) ? "Tie" : (gcd1 - i1 > gcd2 - i2) ? "Lose"
                                                                                : "Win";
        cout << chr << endl;
    }
}
