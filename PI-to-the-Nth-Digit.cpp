/****************
* Find PI to the Nth Digit as entered by the user
****************/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
  int digit;
  cout<<"Enter the digit to which you want to find PI for \n";
  cin>>digit;
  if(digit > 51) {
      cout<<"Limit has been reached";
      cout<<"Displaying maximum number of digits (48)\n";
      cout<<setprecision(48)<<fixed<<(double)22/7;
      return 1; // Stop execution
  }
  else {
    cout<<setprecision(digit)<<fixed<<(atan(1)*4);
  }
  return 0;
}
