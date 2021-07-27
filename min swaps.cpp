//  https://www.hackerrank.com/challenges/minimum-swaps-2/problem

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;a
    int a[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int swaps = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {

            swap(a[i], a[a[i] - 1]);
            swaps++;
            i--;
        }
    }
}
