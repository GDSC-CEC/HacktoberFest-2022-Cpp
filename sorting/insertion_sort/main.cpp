// C++ program to implement Insertion Sort
#include <iostream>
using namespace std;
 

void insertionSort(int arr[],int size)
{  
         // enter your code here
         int i, key, j; 
    for (i = 1; i < size; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
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
   
   insertionSort(arr,size);
   
   printArray(arr, size);
   return 0;
}
