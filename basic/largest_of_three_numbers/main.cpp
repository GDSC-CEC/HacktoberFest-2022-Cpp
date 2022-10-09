//program to find greatest of three numbers
#include<iostream>
using namespace std;
 
int largest(int a,int b,int c){
   //Enter your code here
   if(a>b) {
       if(a>c) cout<<a<<endl;
       else  cout<<c<<endl;
   }
   else if(b>c) cout<<b<<endl;
   else cout<<c<<endl;
}

//Driver Code
int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    cout<<largest(a,b,c);
    return 0;
}
