#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   int f[n + 2];
    int i;
 
    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {
         
      
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
  
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}
