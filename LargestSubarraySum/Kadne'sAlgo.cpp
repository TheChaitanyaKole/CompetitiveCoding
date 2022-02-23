#include<bits/stdc++.h>
using namespace std;

// Calculating Largest Subarray Sum using Prefix Sum Method
// Time complexity for finding sum is O(n) i.e. Linear
int subarraySum(int arr[], int n)
{
    int cs = 0; // Current Sum till now
    int ms = 0; // Maximum summ till now
    for(int i=0; i<n; i++)
    {
        cs += arr[i];
        if(cs<0)
            cs = 0; // if current sum goes below 0 Set it as 0
        ms = max(cs,ms);
    }
    return ms;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Largest Subarray sum is : " <<subarraySum(arr,n);
    return 0;
}
