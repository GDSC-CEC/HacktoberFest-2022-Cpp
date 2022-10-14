// C++ program to implement Linear Search using recursion
#include <iostream>
using namespace std;
 

int linearSearch_recursive(int arr[],int size ,int element)
{  
    // enter your code here
 size--;
     
    // Base case (Element not present in the array)
    if (size < 0) {
        return -1;
    }
    // Base case (Element found, return its position)
    if (arr[size] == element) {
        return size;
    }
 
    // Recursive case
    return linearSearch_recursive(arr, size, element);
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
   
   int element; // element to be searched
    cin>>element;
 
    int result = linearSearch_recursive(arr,size,element);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
