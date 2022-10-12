#include<iostream>
using namespace std;
 
double sum_of_digits(int n){
    if (n>0)
    {
        int r , sum =0;
        while (n>0)
        {
            r = n % 10;
            n = n / 10;
            sum = sum + r;
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
    double n;
    cin>>n;
    cout<<sum_of_digits(n);
    return 0;
}
