//  https://www.hackerrank.com/challenges/counting-valleys/problem

#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    string sequence;
    cin >> sequence;

    int sea_level = 0, valley_count = 0;

    for (char a : sequence)
    {
        sea_level += a == 'D' ? -1: 1;
        if (sea_level == 0 && a == 'U')
            valley_count++;
    }
    cout << valley_count;
}
