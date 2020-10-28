#include <iostream>
using namespace std;


void permute(string a, int start, int end)
{
    // Base case
    if (start == end)
        cout<<a<<endl;
    else
    {
        // Permutations
        for (int i=start; i<=end; i++)
        {
            swap(a[start],a[i]);
            
            permute(a, start + 1, end);
            
            swap(a[start], a[i]);
        }
    }
}


int main()
{
    string A;
    cout << "Enter a word: ";
    cin >> A;
    string str = A;
    int n = str.size();
    permute(str, 0, n-1);
    return 0;
}
