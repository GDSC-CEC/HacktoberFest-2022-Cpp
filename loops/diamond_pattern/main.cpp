#include<iostream>
using namespace std;
 
void diamond_pattern(int n){
   if (n % 2 == 0 || n <= 1)
        cout << "-1" << endl;
    else
    {
        int iF, lf, z = 0;
        for (int i = 0; i < n / 2; i++) // first half
        {
            iF = 0;
            lf = 0;
            for (int j = 0; j < n; j++)
            {
                if (iF < n / 2 - i)
                {
                    iF++;
                    cout << " ";
                }
                else if (lf < 2 * i + 1)
                {
                    lf++;
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            for (int d = 0; d < i; d++)
            {
                cout << " ";
            }
            cout << endl;
        }
        for (int i = n / 2 + 1; i > 0; i--) // remaining
        {
            iF = n;
            lf = n;
            for (int j = n; j > 0; j--)
            {
                if (iF > n / 2 + i)
                {
                    iF--;
                    cout << " ";
                }
                else if (lf > 2 * z)
                {
                    lf--;
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            for (int d = i - 1; d > 0; d--)
            {
                cout << " ";
            }
            cout << endl;
            z++;
        }
    }
}
int main()
{   
    int n;
    cin>>n;
    diamond_pattern(n);
    return 0;
}
