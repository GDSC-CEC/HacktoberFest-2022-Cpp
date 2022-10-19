#include<iostream>
using namespace std;
 
int fibonacci(int n){
   //Enter your code here
   // print the answer in the fucntion itself
  int f[n + 2];
    int i;

    // 0th and 1st number of the
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;

    for(i = 2; i <= n; i++)
    {

       //Add the previous 2 numbers
       // in the series and store it
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
