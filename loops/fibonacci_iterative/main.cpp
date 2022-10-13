#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   // print the answer in the fucntion itself
   int a=0,b=1,c;
   for(int i=0;i<n;i++){
       c=a+b;
       a=b;
       b=c;
   }
   return a;

}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
