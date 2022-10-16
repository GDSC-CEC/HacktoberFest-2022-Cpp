#include<iostream>
using namespace std;
 
void hourglass_pattern(int n){
   //Enter your code here
   // reversed pyramid star pattern
   for (int row = 0; row <n; row++)
   {
        // printing spaces
        for (int col = 0; col < row; col++)
        {
             cout << " ";
        }
        // printing star
        for (int ext = 0; ext < (n - row) * 2 - 1; ext++)
        {
             cout << "*";
        }
        cout << "\n";
   }
   // pyramid star pattern
   for (int row = 2; row <=n; row++)
   {
         // printing spaces
         for (int col = n; col > row; col--)
         {
             cout << " ";
         }
         // printing star
         for (int ext = 0; ext < row * 2 - 1; ext++)
         {
               cout << "*";
         }
         cout << "\n"; 
   }
}
//Driver Code
int main()
{   
    int n;
    cin>>n;
    hourglass_pattern(n);
    return 0;
}
