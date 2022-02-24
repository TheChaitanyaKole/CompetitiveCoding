#include<bits/stdc++.h>
using namespace std;

/*
Bubble Sort Function
Time complexity : O(n^2)
1. Idea is to find the smallest number in array and put it to the start of array
2. Find the next smallest element in the array and put it behind first element
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

// Swap function to swap values
void swap(int &a, int &b) // Taking values by Pass by reference
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) // Bubble Sort Function
{
    for(int i=0; i<n-1; i++)
    {
        int minidx = i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minidx])
            {
                minidx = j;
            }
        }
        swap(arr[i],arr[minidx]);
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
    selectionSort(arr,n); // Calling Bubble sort Function
    cout << "Values after swap : ";
    // Displaying Array after swap
    printArray(arr, n);
    return 0;
}
