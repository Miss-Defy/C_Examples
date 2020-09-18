// This program calculateß the user's pay
#include <iostream>
using namespace std;

int main()
{
  double hours, rate, pay;

  // Get the number of hours worked.
  cout << "How many hours did you work?";
  cin >> hours;

  cout << "How much did you get paid per hour?";
  cin >>  rate;

  pay = hours*rate;

  cout << "You have earned $" << pay << endl;

  return 0;
}
