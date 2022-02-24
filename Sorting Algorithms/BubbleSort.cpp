#include<bits/stdc++.h>
using namespace std;

/*
Bubble Sort Function
Time complexity : O(n^2)
1. Idea is to compare two numbers and swap if first number is larger than second.
2. Repeat above process for n-1 times and the last element of array is sorted.
3. Repeat step 1 and 2 for n-1 times.
*/

// Swap function to swap values
void swap(int &a, int &b) // Taking values by Pass by reference
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void bubbleSort(int arr[], int n) // Bubble Sort Function
{
    for(int i=0; i<n-1; i++) // Loop to repeat the pass n-1 times i.e until array is sorted
    {
        for(int j=0; j<(n-i-1); j++) // Loop sort last element of array i.e pass
        {
            if(arr[j]>arr[j+1]) // Compare two numbers if 1st is greater then swap
            {
                swap(arr[j],arr[j+1]); // calling swap function
            }
        }
    }
}

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    bubbleSort(arr,n); // Calling Bubble sort Function
    cout << "Values after swap : ";
    // Displaying Array after swap
    printArray(arr, n);
    return 0;
}
