#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   // print the answer in the fucntion itself
   int f,a=1,b=1;
   if(n<=0){
      return -1;
   }
   else if(n==1 || n==2){
      return 1;
   }
   else{
     for(int i=3;i<=n;i++){
        f=a+b;
        a=b;
        b=f;
     }
     return f;
   }
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
