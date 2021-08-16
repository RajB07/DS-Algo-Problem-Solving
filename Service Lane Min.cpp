// https://www.hackerrank.com/challenges/service-lane/problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,t,a,b;
    cin >> n >> t;
    int arr[n];
    for(int i =0;i<n;i++) cin >> arr[i];
    for (int i =0;i<t;i++) 
    {
        cin >> a >> b;
        cout << *min_element(arr+a,arr+b+1) << endl;
    }
}
