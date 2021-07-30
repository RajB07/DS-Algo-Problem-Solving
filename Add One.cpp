#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> A = {0, 0, 0, 0, 8, 9, 9, 9, 9};

    int i = A.size() - 1, carry = 1, value;

    for (; (i >= 0 && carry == 1); i--)
    {
        if (A[i] + 1 > 9)
            A[i] = 0;
        else
        {
            A[i]++;
            carry--;
        }
    }
    if (carry)
        A.insert(A.begin(), 1);
    while (A[0] == 0)
        A.erase(A.begin());
    for (int j = 0; j < A.size(); j++)
    {
        cout << A[j] << " ";
    }
//     return A;
}
