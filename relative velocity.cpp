// https://www.hackerrank.com/challenges/kangaroo/problem
#include <iostream>
using namespace std;
int main(){
    int x1,v1,x2,v2;
    cin >> x1 >> v1>> x2 >> v2;
    if (x2-x1==0) cout << "YES";
    else if (v1-v2==0) cout << "NO";
    else if ((x2-x1)*(v1-v2)> 0 && abs(x2-x1)%abs(v1-v2) == 0) cout << "YES";
    else cout << "NO";
}
