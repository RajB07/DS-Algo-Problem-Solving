// LINK
// https://www.hackerrank.com/challenges/candies/
#include <bits/stdc++.h>
using namespace std;

long candies(int n, vector<int> arr)
{
    long numOfCandies[n],sum=0;
    fill_n(numOfCandies,n,1);
    
    for(int i = 1 ; i < n ; i++) 
        if (arr[i]>arr[i-1]) numOfCandies[i]=numOfCandies[i-1]+1;
    for(int i=n-1;i>0;i--)
        if (arr[i-1] > arr[i] && numOfCandies[i-1] <= numOfCandies[i])
            numOfCandies[i-1]=numOfCandies[i]+1;
    for(int i=0 ; i <n ; i++) sum+=numOfCandies[i];
    
    return sum;
};

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    cout << result;
    return 0;
}
