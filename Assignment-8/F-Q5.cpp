#include<iostream>
using namespace std;

template <class T>
int linearSearch(T arr[], int n, T key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
            return i; 
    }
    return -1; 
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;

    cout << "Enter element to search: ";
    cin >> key;

    int pos = linearSearch(arr, n, key);

    if(pos != -1)
        cout << "Element found at index " << pos;
    else
        cout << "Element not found";

    return 0;
}