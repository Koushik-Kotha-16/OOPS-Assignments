#include<iostream>
using namespace std;

template <class T>
class Array
{
    T arr[100];
    int n;

public:
    void getData()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    void show()
    {
        cout << "Array elements are:\n";
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array<int> a1;   

    a1.getData();
    a1.show();

    return 0;
}