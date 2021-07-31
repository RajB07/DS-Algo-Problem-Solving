#include <bits/stdc++.h>

using namespace std;

string isValid(string s)
{
    map<char, int> d;

    for (char a : s)
        d[a]++;
    for (auto i : d)
    {
        cout << i.first << " " << i.second << endl;
    }
    return "";
}
int main()
{

    int i = 0;
    string s = "abcdabcdabcdabcd";

    isValid(s);
}