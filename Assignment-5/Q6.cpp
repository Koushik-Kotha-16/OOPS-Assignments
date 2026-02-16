#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    void showBook() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book {
private:
    string subject;

public:
    Textbook(string t, string a, float p, string s)
        : Book(t, a, p) {
        subject = s;
    }

    void showTextbook() {
        showBook(); \
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Book b1("The Alchemist", "Paulo Coelho", 299);
    cout << "General Book Details:" << endl;
    b1.showBook();

    cout << "\nTextbook Details:" << endl;

    Textbook t1("Physics Fundamentals", "H.C. Verma", 450, "Physics");
    t1.showTextbook();

    return 0;
}
