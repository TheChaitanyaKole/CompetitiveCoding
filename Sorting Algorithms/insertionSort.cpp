#include<bits/stdc++.h>
using namespace std;

/*
Insertion Sort Function
Time complexity : O(n^2)
1. We take the ith element and place it in appropriate position.
*/

// Function to print array
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) // Insertion Sort Function
{
    for(int i=0; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int n; // Taking input for size of an array
    cin >> n;
    int arr[n]; // Declaring array of size n
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        arr[i] = (rand()%1000); // Assigning random values from 1-1000
    }
    cout << "Values Before Swap : ";
    // Displaying Array before swap
    printArray(arr, n);
    insertionSort(arr,n); // Calling Bubble sort Function
    cout << "Values after swap : ";
    // Displaying Array after swap
    printArray(arr, n);
    return 0;
}
