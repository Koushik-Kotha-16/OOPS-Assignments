#include<iostream>
#include<fstream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void input()
    {
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
    }

    void display()
    {
        cout<<"Roll: "<<roll<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

int main()
{
    Student s;

    ofstream fout("STUDENT.DAT", ios::binary);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("STUDENT.DAT", ios::binary);
    fin.read((char*)&s, sizeof(s));
    cout<<"\nData from file:\n";
    s.display();
    fin.close();

    return 0;
}