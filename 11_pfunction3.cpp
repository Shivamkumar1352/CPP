// conversion of binary to decimal

#include <iostream>
using namespace std;

int BinToDec(int n)
{
    int ans = 0;
    int i = 1;
    while (n > 0)
    {
        int y = n % 10;

        ans += i * y;
        i *= 2;
        n /= 10;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << BinToDec(n);
    return 0;
}