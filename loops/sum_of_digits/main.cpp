#include<iostream>
using namespace std;
 
double sum_of_digits(int n){
   //Enter your code here
   double sum=0;
   int a,res;
   while(n>0){
       a=n%10;
    // res=res*10 + a;
    sum+=a;
    n/=10;
   }
   return sum;
}

//Driver Code
int main()
{   
    double n;
    cin>>n;
    cout<<sum_of_digits(n);
    return 0;
}
