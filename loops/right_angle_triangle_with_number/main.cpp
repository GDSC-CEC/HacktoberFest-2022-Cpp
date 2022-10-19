#include<iostream>
using namespace std;
 
void right_angle_triangle_with_number(int n){
   //Enter your code here
   for(int j=1;j<=n;j++)
   {
       for(int i=1;i<=j;i++)
       {
           cout<<j;
       }
       cout<<endl;
   }
}
int main()
{   
    int n;
    cin>>n;
    right_angle_triangle_with_number(n);
    return 0;
}
