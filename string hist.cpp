// https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

#include <bits/stdc++.h>

using namespace std;

string isValid(string s)
{
    map<char, int> d;
    map<int, int> d2;
    for (char a : s)
        d[a]++;
    for (auto i : d)
        d2[i.second]++;

    // for (auto i : d2)
    //     cout << i.first << " " << i.second << endl;
    // for (auto i : d)
    //     cout << i.first << " " << i.second << endl;
    // cout << d2.size() << " Size " << endl;
    // cout << d2.begin()->second << " " << d2.rbegin()->second << endl;
    if (d2.size() > 2)
        return "No";

    else if (d2.size() == 1)
        return "Yes";
    else
        return min(d2.begin()->second, d2.rbegin()->second) <= 1 ? abs(d2.begin()->first - d2.rbegin()->first) == 1 ? "Yes" : "No" : "No";
}

int main()
{
    int i = 0;
    string s = "aabbccd";

    cout << isValid(s);
    cout << isValid("abc") << endl;
    cout << isValid("abcc") << endl;
    cout << isValid("abccccc") << endl;
    cout << isValid("aabbccddeefghi") << endl;
    cout << isValid("abcdefghhgfedecba") << endl;
}
