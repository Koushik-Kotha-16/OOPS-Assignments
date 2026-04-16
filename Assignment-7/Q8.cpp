#include<iostream>
using namespace std;

class Array
{
    int a[5];

public:
    void getData()
    {
        cout << "Enter 5 elements:\n";
        for(int i=0; i<5; i++)
        {
            cin >> a[i];
        }
    }

    int operator[](int index)
    {
        if(index < 0 || index >= 5)
        {
            cout << "Index out of bounds!" << endl;
            return -1;   
        }
        return a[index];
    }
};

int main()
{
    Array arr;
    arr.getData();

    int i;
    cout << "Enter index: ";
    cin >> i;

    int value = arr[i];  

    if(value != -1)
        cout << "Value = " << value;

    return 0;
}