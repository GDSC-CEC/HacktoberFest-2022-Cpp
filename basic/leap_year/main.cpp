//program to find whether given year is leap year or not
#include<iostream>
using namespace std;

bool leap_year(int n){
   //Enter your code here
 if (n % 400 == 0)
        return true;


    if (n % 100 == 0)
        return false;


    if (n % 4 == 0)
        return true;
    return false;
}

//Driver Code
int main()
{
    int n;
    cin>>n;
    if(leap_year(n))
      cout<<"Leap year";
    else
      cout<<"Not a leap year";
    return 0;
}
