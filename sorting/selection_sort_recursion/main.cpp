// C++ program to implement Selection Sort using recursion
#include <iostream>
using namespace std;
 
 int minInd(int arr[], int index, int sz)
{
    if (index == sz)
        return index;
 
    int m = minInd(arr, index + 1, sz);
 
    return (arr[index] < arr[m])? index : m;
}

void selectionSort_recursive(int arr[],int size, int index=0)
{  
         // enter your code here
         if(index==size)
            return;

        int x = minInd(arr, index, size-1); 

        if(x!=index)
            swap(arr[x],arr[index]);

        selectionSort_recursive(arr, size, index+1);
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
   
   selectionSort_recursive(arr,size);
   
   printArray(arr, size);
   return 0;
}
