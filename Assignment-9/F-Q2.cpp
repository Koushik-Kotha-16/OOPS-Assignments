#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

template <class T>
void minElement(T *arr, int size)
{
    T min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minimum element = " << min << endl;
}

int main()
{
    int numbers[] = {10, 20, 30};

    minElement(numbers, 3);

    return 0;
}
