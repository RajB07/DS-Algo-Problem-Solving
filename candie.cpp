// LINK
// https://www.hackerrank.com/challenges/candies/


#include <bits/stdc++.h>
using namespace std;

long candies(int n, vector<int> arr)
{
    long numOfCandies[n]={0};
    int curr;
    numOfCandies[0]=1;
    for(int i = 1 ; i < n ; i++)
    {
        if (arr[i]>arr[i-1])
        {
            numOfCandies[i]=numOfCandies[i-1]+1;
        }
        else if (arr[i]<arr[i-1])
        {
            numOfCandies[i]=1;
            curr = i;
            if (numOfCandies[curr] == numOfCandies[curr-1]){
                while (arr[curr] < arr[curr-1] and numOfCandies[curr-1] == numOfCandies[curr]){            curr -=1;
                    numOfCandies[curr]++;
                    
                }
            }

        }
        else 
        {
            numOfCandies[i]=1;
        }
    
    }
    long sum=0;
    for(int i=0 ; i <n ; i++)
    {
        // cout << numOfCandies[i] << ' ' ;
        sum+=numOfCandies[i];
    }
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
