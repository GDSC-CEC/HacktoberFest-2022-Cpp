#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   // print the answer in the fucntion itself
   if(n<2){
    return 1;
   }
 return fibonacci(n-2)+fibonacci(n-1);
 
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
