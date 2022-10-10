#include<iostream>
using namespace std;
 
void half_diamond_pattern(int n){
    int i,j;
    
   if (n%2==0)
   {
       cout<<"Invalid Number";
   }
   
   else if(n==1)
   {
       cout<<"Invalid Number";
   }
   
   else
   {
       for(i=1;i<=(n/2)+1;i++)
       {
           for(j=1;j<=(n/2)+1;j++)
           {
               if(j<=i)
               {
                   cout<<"*";
               }
           }
           cout<<endl;
       }
       
       for(i=1;i<=(n/2)+1;i++)
       {
           for(j=1;j<=(n/2)+1;j++)
           {
               if(j>i)
               {
                   cout<<"*";
               }
           }
           cout<<endl;
       }
   }
}
int main()
{   
    int n;
    cin>>n;
    half_diamond_pattern(n);
    return 0;
}
