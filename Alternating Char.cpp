// https://www.hackerrank.com/challenges/alternating-characters/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string input;
    cin >> t;

    while (t--)
    {
        cin >> input;
        int count = 0, prev = input[0];
        for (int i = 1; i < input.size(); i++)
        {
            if (input[i] == prev)
                count++;
            prev = input[i];
        }
        cout << count << endl;
    }
}
