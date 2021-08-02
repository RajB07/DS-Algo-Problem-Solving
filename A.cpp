#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    string name, resp;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> name >> resp;
            if (resp == "YES")
                count++;
        }
        cout << count << endl;
    }
}
