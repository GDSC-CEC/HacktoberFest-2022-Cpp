//program to swap two numbers
#include<iostream>
using namespace std;
 
void swap(int &a,int &b){
   //Enter your code here
 int temp = a;
 a = b;
 b = temp;
}

//Driver Code
int main()
{   
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}
