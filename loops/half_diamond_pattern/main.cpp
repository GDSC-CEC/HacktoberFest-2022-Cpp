#include<iostream>
using namespace std;

void half_diamond_pattern(int n){
   //Enter your code here
 int i, j;


    for (i = 0; i < n; i++) {
        for (j = 0; j < i + 1; j++)
            cout << "*";
        cout << "\n";
    }


    for (i = 1; i < n; i++) {
        for (j = i; j < n; j++)
            cout << "*";
        cout << "\n";
    }
}
int main()
{
    int n;
    cin>>n;
    half_diamond_pattern(n);
    return 0;
}
