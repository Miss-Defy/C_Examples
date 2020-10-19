#include <iostream>
using namespace std;

// Function Prototype
int searchBinary(const int [], int, int);
const int SIZE = 5;



int main()
{
    int tests[SIZE] = {87, 75, 98, 100, 82};
    int results;
    
    
    // Search the array for 100
    results = searchBinary(tests, SIZE, 100);
    
    // If searchList returns -1 then 100 was not found in any test
    if (results ==1)
        cout << " You did not earn 100 on any test \n";
    else
    {
        // Otherwise results contains the subscript of the first 100 found
        cout << "You earned 100 points on a test! \n";
        cout << "You earned 100 points on test: " << (results + 1) << endl;
    }
    
    return 0;
}



int searchBinary(const int array[], int numElems, int value)
{
    int first = 0;
    int last = numElems -1;
    int middle;
    int position =-1;
    bool found = false;
    
    while (first <= last && !found)
    {
        middle = (first + last)/2;
        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else first = middle +1;
    }
    
    return position;
}
