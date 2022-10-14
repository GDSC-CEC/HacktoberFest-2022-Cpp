#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
   // print the answer in the fucntion itself
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
