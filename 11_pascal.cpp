//pascal triangle
#include<iostream>
using namespace std;

//function to get factorial
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

//function to get binary coefficient
int coeff(int i, int j)
{
    int ans = fact(i)/(fact(j)*fact(i-j));
    return ans;
}

//function to get pattern
int main()
{
    int n;
    cin>>n;

     for (int i = 0; i < n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<coeff(i,j)<<" ";
        }
    cout<<endl;
    }
    return 0;
}