#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]>key)
            e = mid-1;
        else
            s = mid+1;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;
   
    int arr[n];
      
    cout<<"Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key you want to search: ";
    cin>>key;

     if (binarySearch(arr, n, key)== -1)
    cout<<"Key not found"<<endl;
    else
    cout <<"it is at position arr["<<binarySearch(arr, n, key) <<"]"<<endl;
    return 0;
}