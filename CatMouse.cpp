// https://www.hackerrank.com/challenges/cats-and-a-mouse
#include <iostream>
using namespace std;
int main(){
    int t,a,b,m;
    cin >> t;
    while(t--){
        cin >> a >> b >> m;
        if (abs(m-a) > abs(m-b))
            cout << "Cat B" << endl;
        else if (abs(m-a) < abs(m-b))
            cout << "Cat A" << endl;
        else
            cout << "Mouse C" << endl;
    }  
}
