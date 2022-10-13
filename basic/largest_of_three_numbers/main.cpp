//program to find greatest of three numbers
#include<iostream>
using namespace std;

//Use of nested if else
int largest(int a,int b,int c){
   if(a>b)
   {
       if(a>c)
       {
           return a;
       }
       else
       {
           return c;
       }
   }
   else
   {
       if(b>c)
       {
           return b;
       }
       else
       {
           return c;
       }
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
