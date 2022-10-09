//program to find greatest of three numbers
#include<iostream>
using namespace std;
 
int largest(int a,int b,int c){
   if(a > b && a > c){
    return a;
   }
   else if(b > a && b > c){
    return b;
   }
   else if(c > a && c > b){
    return c;
   }
}

//Driver Code
int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    cout<<largest(a,b,c);
    return 0;
}
