#include <iostream>
using namespace std;

void inverted_half_pyramid_pattern(int n)
{
    if (n > 0)  // if input is greater than 0 i.e, a valid number then code will run
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 1; j <= n - i; j++)    // for spaces
            { 
                cout << " ";
            }
            for (int j = 1; j <= ((2 * i) - 1); j++)    // for stars
            { 
                cout << "*";
            }
            cout << endl;
        }
    }
    else
        cout << "-1";   // if input is not valid then -1 is returned
}

int main()
{
    int n;
    cin >> n;
    inverted_half_pyramid_pattern(n);
    return 0;
}
