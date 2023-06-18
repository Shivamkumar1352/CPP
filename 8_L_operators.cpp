#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "n is divisible by both 2 and 3." << endl;
    }
    else if (n % 2 == 0 || n % 3 == 0)
    {
        cout << "n is divisible by either 2 or 3." << endl;
    }
    else
    {
        cout << "not divisible by any of it." << endl;
    }
    return 0;
}