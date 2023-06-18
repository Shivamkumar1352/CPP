#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p = &a; //pointer p stores the value of a
    cout << "Enter a number: ";
    cin >> a;
    cout << sizeof(a) << endl;
    cout << (a % 2 == 0) ? "even" : "true";
    cout << "\n" << float(a) << endl;
    cout<< &a << endl; 
    cout << p << endl;
    return 0;
}