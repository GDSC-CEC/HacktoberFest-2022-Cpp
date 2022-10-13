#include<iostream>
using namespace std;
 
void half_pyramid_pattern(int n){
   //Enter your code here
   if(n>0){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
               if(j<=i){
                cout<<"*";
               }
               else{
                cout<<" ";
               }
            }
            cout<<"\n";
        }
   }
   else{
     cout<<"enter the valid n";
   }
   
}
int main()
{   
    int n;
    cin>>n;
    half_pyramid_pattern(n);
    return 0;
}
