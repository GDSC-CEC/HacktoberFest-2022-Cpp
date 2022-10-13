//program to swap two numbers
#include<iostream>
using namespace std;

class Sample{
    
    int x,y;
 public:
 	int temp;
    void getdata(){
     cout<<"Enter the first number= ";
     cin>>x;
     cout<<"Enter the secound number= ";
     cin>>y;
    }
    void showdata(){
    	temp=x;
    	x=y;
    	y=temp;    	
    	cout<<"The value of first number is now= "<<x<<endl;
    	cout<<"The value of secound number is now= "<<y;

	}
};

//Driver Code
int main()
{   
     
	Sample s;
	s.getdata();
	s.showdata();

 return 0;
}
