// Max till i

#include<iostream>
using namespace std;

int max(int a[], int i)
{
    int max = a[0];
    for(int j=0; j<=i; j++)
    {
        if (a[j]>=max)
        {
            max=a[j];
        }
    }
    return max; 
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    cout<<max(a, i)<<endl;
    return 0;
}
