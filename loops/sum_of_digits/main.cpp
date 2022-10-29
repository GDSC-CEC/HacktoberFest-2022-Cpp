#include<iostream>
using namespace std;
 
double sum_of_digits(long n){
   //Enter your code here
   // long is better to use
   int sum=0,temp;
   if(n>0)
   {
        while(n>0)
        {
            temp=n%10;    
            sum=sum+temp;    
            n=n/10;
        }
        return sum;
   }
   else
   {
       return -1;
   }
}

//Driver Code
int main()
{   
    long  n
    cin>>n;
    cout<<sum_of_digits(n);
    return 0;
}
