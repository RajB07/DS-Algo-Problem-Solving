//  https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem

#include <iostream>

using namespace std;

int main()
{
    int n, d, r;

    cin >> n >> d;
    int a[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i - d % n >= 0 ? i - d % n : i - d % n + n];
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
