#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int N, Money, n;
    cin >> N;
    while (N--)
    {
        cin >> Money >> n;
        int temp, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp % 200 == 0 && temp + 20 <= Money)
            {
                Money = Money - temp - 20;
                count++;
            }
        }
        cout << Money << " " << count << endl;
    }
}
