#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no. of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}