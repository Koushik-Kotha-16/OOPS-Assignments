#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

template <class T>
void maxElement(T *arr, int size)
{
    T max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element = " << max << endl;
}

int main()
{
    int numbers[] = {10, 20, 30};

    maxElement(numbers, 3);

    return 0;
}
