#include<iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    friend istream& operator>>(istream &in, Student &s);
    friend ostream& operator<<(ostream &out, Student &s);
};

istream& operator>>(istream &in, Student &s)
{
    cout << "Enter roll number: ";
    in >> s.roll;

    cout << "Enter name: ";
    in >> s.name;

    return in;
}

ostream& operator<<(ostream &out, Student &s)
{
    out << "Roll No: " << s.roll << endl;
    out << "Name: " << s.name << endl;

    return out;
}

int main()
{
    Student s1;

    cin >> s1;    
    cout << s1; 

    return 0;
}