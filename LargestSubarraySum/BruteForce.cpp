#include<bits/stdc++.h>
using namespace std;

// Calculating Lagest Subarray Sum using Brute Force
// Time complexity is O(n^3) i.e. cubic
int subarraySum(int arr[], int n)
{
    int lsum = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                sum+=arr[k];
            }
            if(sum>lsum)
                lsum = sum;
        }
    }
    return lsum;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Largest Subarray sum is : " <<subarraySum(arr,n);
    return 0;
}
