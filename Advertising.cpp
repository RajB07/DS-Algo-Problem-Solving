// https://www.hackerrank.com/challenges/strange-advertising/problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=5,b=2,n;cin >> n;
    for(int i=1;i<n;i++){
        a= (a/2)*3;
        b = b + (a/2);
        }
    cout << b;
}
