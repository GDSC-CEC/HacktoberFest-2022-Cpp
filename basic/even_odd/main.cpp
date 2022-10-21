//program to find whether given number is even or odd
#include <iostream>
using namespace std;

int main() {
  int a;
  cout << "Enter the number: "; cin >> a;
  //logic 

  if (a % 2 == 0) {
    cout << "Number is EVEN" << endl;
  } else {
    cout << "Number is ODD" << endl;
  }

  return 0;
}
