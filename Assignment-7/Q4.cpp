#include <iostream>
using namespace std;

class Student
{
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};

class Engineering : public Student
{
    int roll;
    string name;

public:
    void getdata()
    {
        cin >> roll >> name;
    }

    void display()
    {
        cout << "Engineering Student: " << roll << " " << name << endl;
    }
};

class Medicine : public Student
{
    int roll;
    string name;

public:
    void getdata()
    {
        cin >> roll >> name;
    }

    void display()
    {
        cout << "Medicine Student: " << roll << " " << name << endl;
    }
};

class Science : public Student
{
    int roll;
    string name;

public:
    void getdata()
    {
        cin >> roll >> name;
    }

    void display()
    {
        cout << "Science Student: " << roll << " " << name << endl;
    }
};

int main()
{
    Student *s[3];

    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for (int i = 0; i < 3; i++)
        s[i]->getdata();

    for (int i = 0; i < 3; i++)
        s[i]->display();

    return 0;
}
