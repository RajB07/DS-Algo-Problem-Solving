// LINK https://www.hackerrank.com/challenges/dynamic-array/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N = 0, Q = 0;
    int lastans = 0;
    int type, x, y;
    int seq = 0;
    int pos;
    
    cin >> N >> Q;
    
    vector < vector <int>> a(N);
    
    for (int i = 0; i < Q; i ++) {
        cin >> type >> x >> y;
        seq = ((x ^ lastans) % N);
        if (type == 1) {
            a[seq].push_back(y);
        }
        else if (type == 2) {
            pos = (y % a[seq].size());
            lastans = a[seq][pos];
            cout << lastans << endl;
        }
        
    }
    return 0;
}
