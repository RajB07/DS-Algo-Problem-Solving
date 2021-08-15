// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i =0 ; i <n;i++)
        cin >> a[i];
    int mx = a[0],mn = a[0],mx_count = 0,mn_count=0;
    for(int i = 1 ;i<n;i++)
    {
        if (a[i] > mx) {mx_count++;mx=a[i];}
        if (a[i]<mn){mn_count++;mn=a[i];}
    }
    cout << mx_count << " " << mn_count << endl;
}
