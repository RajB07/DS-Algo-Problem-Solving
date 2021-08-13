// https://www.hackerrank.com/challenges/absolute-permutation/problem
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,status = 1;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> pos(n,0);
        vector<bool> check(n,false);
        
        for(int i=0;i<n;i++) pos[i]=i+1;
        
        if (k==0)
            for(int i=0;i<n;i++) cout << pos[i] << " ";
            
        else if (n%(2*k)==0) 
            {
                for(int i =0 ;i<n;i++)
                {
                    if (!check[i])
                    {
                        swap(pos[i],pos[i+k]);
                        check[i] = true;
                        check[i+k] = true;
                    }
                }
            for(int i=0;i<n;i++) cout << pos[i] << " ";
            }
        else {
        cout << -1 ;
        }    
        cout << endl;
        
            
    }
}
