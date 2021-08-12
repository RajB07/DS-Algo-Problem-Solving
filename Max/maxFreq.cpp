// https://www.hackerrank.com/challenges/migratory-birds/problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,max=0,temp;
    cin >> n;
    int freq[5]={0};
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        freq[temp-1]++;
    }
    for(int i=0;i<5;i++) if (freq[max] < freq[i]) max = i;
    cout << max+1 << endl;    
}
