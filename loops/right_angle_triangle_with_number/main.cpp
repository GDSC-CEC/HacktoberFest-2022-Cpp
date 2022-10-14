#include<iostream>
using namespace std;
 
void right_angle_triangle_with_number(int n){
   //Enter your code here
 for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
}
int main()
{   
    int n;
    cin>>n;
    right_angle_triangle_with_number(n);
    return 0;
}
