//program to swap two numbers
#include<iostream>
using namespace std;
 
class Sample{
    // define your class here
    int a, b;
    public:
    void data(int c, int d){
        a=c;
        b=d;
        cout<<"Numbers after swapping -> "<<a <<" "<<b<<endl;
    }
    void swap(){
        int t;
        t=a;
        a=b;
        b=t;
        cout<<"Numbers before swapping -> "<<a <<" "<<b<<endl;
    }

};


int main()
{   
     // implement the use of objects here
     Sample s;
     s.data(4,5);
     s.swap();
    return 0;
}
