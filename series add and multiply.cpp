// https://www.hackerrank.com/challenges/utopian-tree/problem

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,value;
    cin >> t;
    
    while(t--){
        cin >> n;
        value = 1;
        // for(int i = 0;i<n;i++){
        //     if (i%2==0){
        //          value = value * 2;
        //     }
        //     else{
        //        value++;
        //     }
        // }
        n++;
        if (n%2==1){
            value = pow(2,(n+1)/2)-1;
        }
        else{
            value = pow(2,(n+2)/2)-2;
        }
        cout << value << endl;
    }
}
