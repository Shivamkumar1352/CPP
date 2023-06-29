// check pythagorian triplet

#include <iostream>
#include <math.h>
using namespace std;

bool check(int a, int b, int c)
{
    int x, y, z;
    x = max(a, max(b, c));
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    return pow(x, 2) == (pow(y, 2) + pow(z, 2));
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (check(a, b, c))
    {
        cout << "Pythagorean triplet" << endl;
    }
    else
    {
        cout << "not a pythagorean triplet" << endl;
    }
    return 0;
}