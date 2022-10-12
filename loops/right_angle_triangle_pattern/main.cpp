#include<iostream>
using namespace std;
 
void right_angle_triangle_pattern(int n){
   int i , j;
   for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if (j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
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
