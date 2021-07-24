# LINK   https://www.hackerrank.com/challenges/find-point/problem

#include <iostream>

using namespace std;

int main(){
    int n;
    int p[2],q[2];
    cin >> n;
    while(n--){
        cin >> p[0] >> p[1] >> q[0] >> q[1];
        
        p[0] = q[0] -(p[0]-q[0]);
        p[1] = q[1] -(p[1]-q[1]);
        
        cout << p[0] << " " << p[1] << endl;    
        
    }
    
    
    
    
}
