#include<bits/stdc++.h>
using namespace std;

// Calculating Largest Subarray Sum using Prefix Sum Method
// Time complexity for finding sum is O(n^2) i.e. Quadratic
int subarraySum(int arr[], int n)
{
    int lsum = 0; // declaring largest sum of subarray
    int psum[n] = {0}; // To hold Sum of previous n terms
    psum[0] = arr[0];
    // To create the prefix sum array
    for(int i=1; i<n; i++)
    {
        psum[i] = arr[i] + psum[i-1];
    }
    // To find largest sum of subarray
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = i>0 ? psum[j]-psum[i-1] : psum[j]; // If i > 0 the prefix sum is psum[j]-psum[i-1] else it is psum[j] i.e largest sum is starting from intex 0
            lsum = max(sum , lsum); // updating lsum
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
