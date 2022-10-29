// C++ program to implement Merge Sort
#include <iostream>
#include<array>
using namespace std;



void merge(int *arr, int l, int m, int r) 
{
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = arr[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = arr[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) 
   {
      if(larr[i] <= rarr[j]) {
         arr[k] = larr[i];
         i++;
      }else{
         arr[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) 
   {       //extra element in left array
      arr[k] = larr[i];
      i++; k++;
   }
   while(j<nr) 
   {     //extra element in right array
      arr[k] = rarr[j];
      j++; k++;
   }
}

void mergeSort(int arr[],int begin,int end)
{  
         if(begin<end)
         {
             int m=begin+(end-begin)/2;
             mergeSort(arr,begin,m);
             mergeSort(arr,m+1,end);
             merge(arr,begin,m,end);
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
    
    for(int i=0;i<size;i++)
    {
       cin>>arr[i]; // elemnents in the array
    }
   
   mergeSort(arr,0,size-1);
   
   printArray(arr, size);
   return 0;
}
