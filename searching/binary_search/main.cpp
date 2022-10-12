// C++ program to implement Binary Search
#include <iostream>
using namespace std;
 

int binarySearch(int arr[], int l, int r, int x)
{
   int i=0,j=r,mid=0,b=0;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(arr[mid]==x)
        {
            b=1;
            break;
        }
        else if(arr[mid]>x)
        {
            j=mid-1;
        }
        else
        {
            i=mid+1;
        }
    }
    if(b==1)
    {
        cout<<"Present at "<<mid<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
}
 
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
 
    int result = binarySearch(arr, 0, size - 1, element);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
