#include<iostream>
using namespace std;
 
double sum_of_digits(int n){
   //Enter your code here

   double res=0;
   if(n>0){
   while(n>0){
       res+=n%10 ;
       n/=10;
   }
   return res;
   }
   return -1;
}

//Driver Code
int main()
{   
    double n;
    cin>>n;
    cout<<sum_of_digits(n);
    return 0;
}
