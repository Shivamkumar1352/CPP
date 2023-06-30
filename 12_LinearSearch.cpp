#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;  
}

int main()
{
    int n;
    cout << "Enter the no. of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key you want to search: ";
    cin >> key;
    if (linearSearch(arr, n, key)== -1)
    cout<<"Key not found"<<endl;
    else
    cout <<"it is at position arr["<<linearSearch(arr, n, key) <<"]"<<endl;
    return 0;
}