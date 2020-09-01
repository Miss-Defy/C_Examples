#include <iostream>
using namespace std;

void print_separator()
{
    cout << "--->^.^<---mew---\n";
}

int main()
{
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;
    
    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.\n";
    
    print_separator();
    
    return 0;
}
