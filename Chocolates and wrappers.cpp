// https://www.hackerrank.com/challenges/chocolate-feast/problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t,n,m,c,wrappers,count,temp;
    
    cin>>t;
    while(t--){
        wrappers = 0 ; count = 0 ;
        cin >> n >> c >> m;
        wrappers = n/c;
        count = wrappers;
        n = n%c;
        while(n>=c || wrappers >= m)
        {
            temp = wrappers/m;
            count += temp;
            wrappers = wrappers + temp - temp*m;
        }
        cout << count << endl;
    }
    
    
}
