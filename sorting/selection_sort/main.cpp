// C++ program to implement Selection Sort
#include <iostream>
using namespace std;
 

void selectionSort(int arr[],int size)
{  
        int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < size-1; i++)
    {
       // Find the minimum element in  unsorted array
        min_idx = i;
        for (j = i+1; j < size; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
        // Swap the found minimum element with the first element
        if(min_idx!=i)
            swap(arr[min_idx], arr[i]);
    }
}


void printArray(int arr[], int n)  // function to print elements of array
{
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver Code
int main()
{   
    int size;
    cin>>size; //size of array
    int arr[size];
    
    for(int i=0;i<size;i++){
       cin>>arr[i]; // elemnents in the array
    }
   
   selectionSort(arr,size);
   
   printArray(arr, size);
   return 0;
}
