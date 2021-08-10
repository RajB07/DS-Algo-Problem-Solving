// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k , n,temp,sum =0; cin >> n >> k;
    vector<int> m(k,0);
    for (int i =0;i<n;i++){
        cin >> temp;
        m[temp%k]++;   
    }
    sum+=(m[0]*(m[0]-1))/2;
    sum+=k%2==0 ?(m[k/2]*(m[k/2]-1))/2:0;
    for(int i=1; i<float(k)/2 ; i++) sum+=m[i]*m[k-i];
    cout<<sum;
}
