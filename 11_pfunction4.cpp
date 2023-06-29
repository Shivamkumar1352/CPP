// octal to decimal

#include <iostream>
using namespace std;

int OctToDec(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {
        int y = n % 10;

        ans += i * y;
        i *= 8;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << OctToDec(n);
    return 0;
}