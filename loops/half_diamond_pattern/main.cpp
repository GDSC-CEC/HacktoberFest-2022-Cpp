#include<iostream>
using namespace std;
 
void half_diamond_pattern(int n){
   //Enter your code here
   for(int row=1;row<=n;row++)  //loop for rows
   {
        for(int col=0;col<row;col++)
        {
            cout<<"*";
        }
        cout<<"\n";
   }
   for(int row=1;row<=n-1;row++)
   {
        for(int col=0;col<n-row;col++)
        {
            cout<<"*";
        }
        cout<<"\n";
   }
}
int main()
{   
    int n;
    cin>>n;
    half_diamond_pattern(n);
    return 0;
}
