//sub array having Maxium sum

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int maxSum = INT_MIN, st, en;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int sum = 0;
            for(int k=i; k<=j; k++)
            {
                sum += a[k];
            }
            if (sum>maxSum)
            {
                maxSum = sum;
                st=i;
                en=j;
            }
        }
    }
    for(int i = st; i<=en; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}