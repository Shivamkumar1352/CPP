//sub array whose sum equals S
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;

    int sum = 0;

    for(int i =0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            sum += a[j];
            if(sum == s)
            {
                cout<<"The sum of elements from "<<i+1<<" postion to "<<j+1<<" position is "<<s<<endl;
            }
        }
        sum = 0;
    }
    
    return 0;
}