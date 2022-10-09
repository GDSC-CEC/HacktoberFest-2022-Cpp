#include<iostream>
using namespace std;
 
void right_angle_triangle_with_number(int n){
   int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            {
                cout<<j;
            }
        }
        cout<<"\n";
    }
}
int main()
{   
    int n;
    cin>>n;
    right_angle_triangle_with_number(n);
    return 0;
}
