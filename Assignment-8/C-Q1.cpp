#include<iostream>
using namespace std;

template <class T>
class Stack
{
    T arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if(top == 99)
        {
            cout << "Stack Overflow\n";
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack Underflow\n";
        }
        else
        {
            cout << "Popped element: " << arr[top] << endl;
            top--;
        }
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is empty\n";
        }
        else
        {
            for(int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.display();

    return 0;
}