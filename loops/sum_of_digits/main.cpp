#include<iostream>
using namespace std;
 
double sum_of_digits(int n){
    
    if(n<0){
        return -1;
    }
    
    double sum = 0;
    while(n!=0){
        sum+=(n%10);
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