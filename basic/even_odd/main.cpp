//program to find whether given number is even or odd
#include<iostream>
using namespace std;
 
bool even_odd(int n){
   //Enter your code here
   // return true is number is even
   // or return false if number is odd
 if(n%2==0){
  return true;
 }
 return false;
}


//Driver Code
int main()
{   
    int n;
    cin>>n;
    if(even_odd(n))
      cout<<"Number is even";
    else
      cout<<"Number is odd";
    return 0;
}
