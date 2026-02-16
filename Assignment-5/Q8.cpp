#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name;
    int id;
    string contact;

public:
    LibraryUser(string n, int i, string c) {
        name = n;
        id = i;
        contact = c;
    }

    void showUser() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Student : public LibraryUser {
private:
    string gradeLevel;

public:
    Student(string n, int i, string c, string g)
        : LibraryUser(n, i, c) {
        gradeLevel = g;
    }

    void showStudent() {
        cout << "\nStudent Details:" << endl;
        showUser();
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : public LibraryUser {
private:
    string department;

public:
    Teacher(string n, int i, string c, string d)
        : LibraryUser(n, i, c) {
        department = d;
    }

    void showTeacher() {
        cout << "\nTeacher Details:" << endl;
        showUser();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s1("Ravi", 101, "9876543210", "10th Grade");
    s1.showStudent();

    Teacher t1("Meera", 201, "9123456780", "Mathematics");
    t1.showTeacher();

    return 0;
}
