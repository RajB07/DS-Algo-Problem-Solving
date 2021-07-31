
#include <iostream>
#include <thread>
using namespace std;

void even(int n)
{
    for (int i = 0; i < n + 1; i++)
        if (i % 2 == 0)
            cout
                << i << " ";
}
void odd(int n)
{
    for (int i = 0; i < n + 1; i++)
        if (i % 2)
            cout << i << " ";
}
int main()
{

    thread th1(even, 50);
    thread th2(odd, 5);

    th1.join();
    th2.join();
    return 0;
}