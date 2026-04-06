#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <class T>
void printArray(T arr[], int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {5, 2, 9, 1, 3};
    int n = 5;

    cout << "Before Sorting: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "After Sorting: ";
    printArray(arr, n);

    return 0;
}
