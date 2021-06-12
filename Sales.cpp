// LINK https://www.hackerrank.com/challenges/sock-merchant


#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    int a[n] = {0};
    
    cin >> n;for(int i=0;i<n;i++)cin >> a[i];
    
    map<int,int> list;
    for(int i=0;i<n;i++)
        list[a[i]]++;
        
    int sum =0;
    for (auto i : list)sum+=i.second/2;
    cout << sum;
    
    
    
}
