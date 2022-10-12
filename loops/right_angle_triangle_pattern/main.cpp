#include<iostream>
using namespace std;
 
void right_angle_triangle_pattern(int n){
   
   for(int i=1;i<=n;i++){
       for(int j=0;j<i;j++){
           cout<<"*";
       }
       cout<<endl;
   }
}

//Driver Code
int main()
{   
    int n;
    cin>>n;
    right_angle_triangle_pattern(n);
    return 0;
}