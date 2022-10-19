#include<iostream>
using namespace std;
 
double sum_of_digits(int n){
   //Enter your code here
 int rem, sum=0;
    
    
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem;
        n = n/10;
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
