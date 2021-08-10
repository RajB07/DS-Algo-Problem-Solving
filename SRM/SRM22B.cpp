// http://arena.siesgst.ac.in/contest/SRM22/problem/SRM22B
#include <iostream>
#include <cmath>
int main()
{
    int n, m;
    std::string name;
    int connect, resp;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            std::cin >> name >> connect >> resp;
            if (resp == 1)
                count += ceil((double)connect / 2);
            else if (resp == 2)
                count += connect;
        }
        std::cout << count << std::endl;
    }
}
