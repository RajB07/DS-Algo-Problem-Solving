#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n = 4;

    vector<vector<int>> a;
    a = {{0, 0, 1, 0},
         {0, 0, 1, 0},
         {0, 0, 0, 0},
         {0, 0, 1, 0}};

    vector<int> indeg(n, 0), outdeg(n, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j])
            {
                outdeg[i]++;
                indeg[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << indeg[i] << " ";
    cout << endl;
    for (int i = 0; i < n; i++)
        cout << outdeg[i] << ' ';
    int max;
    for (int i = 0; i < n; i++)
        if (indeg[i] == n - 1)
            max = i;
    cout << endl;
    if (outdeg[max] == 0)
        cout << "Celebrity at " << max + 1;
    else
        cout << "No celebrity";
}