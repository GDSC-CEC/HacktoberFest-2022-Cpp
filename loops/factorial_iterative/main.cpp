#include<iostream>
using namespace std;
 
double factorial(int n){
    double res=1;
   for(int i=1;i<=n;i++) res*=i;
   return res;
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
