#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int original = n;
    int sum=0;
    while (n>0)
    {
        int l=n%10;
        sum += round(pow(l,3));
        n=n/10;
    }
    if(sum==original)
    {
        cout<<"Armstrong"<<endl;
    }
    else
    {
        cout<<"Not armstrong"<<endl;
    }
    return 0;
}