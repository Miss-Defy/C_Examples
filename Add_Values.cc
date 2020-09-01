#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double First_Number, Second_Number, Sum, Abs_Diff;
    
    cout << "Enter First Number: ";
    cin >> First_Number;
    
    cout << "Enter Second Number: ";
    cin >> Second_Number;
    
    Sum = First_Number + Second_Number;
    Abs_Diff = abs(First_Number - Second_Number);
    
    cout << "Sum = " << Sum << endl;
    cout << "Absolute Difference = " << Abs_Diff;
    
    return 0;
}
