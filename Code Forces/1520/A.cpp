// https://codeforces.com/contest/1520/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 1;
        int n;
        string s;
        cin >> n >> s;
        set<char> hist;
        char prev;
        for (int i = 0; i < n; i++)
        {
            if (prev != s[i] && hist.find(s[i]) != hist.end())
            {
                flag = 0;
                break;
            }
            hist.insert(s[i]);
            prev = s[i];
        }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
