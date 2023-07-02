#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int ans = 0;
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            if (a[i] > a[i + 1])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
