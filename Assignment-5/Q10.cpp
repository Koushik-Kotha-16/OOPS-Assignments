#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    string address;

public:
    Person(string n, string a) {
        name = n;
        address = a;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Staff : virtual public Person {
protected:
    int employee_id;
    string department;

public:
    Staff(string n, string a, int eid, string dept)
        : Person(n, a) {
        employee_id = eid;
        department = dept;
    }

    void showStaff() {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : virtual public Person {
protected:
    int student_id;
    string grade;

public:
    Student(string n, string a, int sid, string g)
        : Person(n, a) {
        student_id = sid;
        grade = g;
    }

    void showStudent() {
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    TeachingAssistant(string n, string a, int eid, string dept, int sid, string g)
        : Person(n, a), Staff(n, a, eid, dept), Student(n, a, sid, g) {}

    void showTA() {
        showPerson();
        showStaff();
        showStudent();
    }
};

int main() {
    TeachingAssistant ta("Arjun", "Delhi", 501, "Computer Science", 1001, "A");
    ta.showTA();
    return 0;
}
