#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    
    cout << "Enter a original: ";
    cin >> a;
    
    cout << "Enrer b original: ";
    cin >> b;
    

    
    temp = a;
    a = b;
    b = temp;
    
    cout <<"\nAfter swapping." << endl;
    cout << "a = " << a << ",b = " << b << endl;
    
    return 0;
}
