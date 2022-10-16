// C++ program to implement Insertion Sort Recursion
#include <iostream>
using namespace std;
 

void insertionSort_recursion(int arr[],int size)
{  
         // enter your code here
    if (size <= 1)
        return;
 
    insertionSort_recursion( arr, size-1 );
 
    int last = arr[size-1];
    int j = size-2;
 

    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
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
   
   insertionSort_recursion(arr,size);
   
   printArray(arr, size);
   return 0;
}
