#include <iostream>
using namespace std;

class Book
{
    string title, author;
    int isbn;

public:
    inline void setBook(string title, string author, int isbn)
    {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }

    int getISBN()
    {
        return isbn;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << endl;
    }
};

class Library
{
    Book b[10];
    int count;

public:
    Library()
    {
        count = 0;
    }

    bool addNewBook(string &title, string &author, int &isbn);
    bool removeBooks(int &isbn);
    void displayDetails();
};

bool Library::addNewBook(string &title, string &author, int &isbn)
{
    b[count].setBook(title, author, isbn);
    count++;
    return true;
}

bool Library::removeBooks(int &isbn)
{
    for(int i=0;i<count;i++)
    {
        if(b[i].getISBN()==isbn)
        {
            for(int j=i;j<count-1;j++)
                b[j]=b[j+1];

            count--;
            return true;
        }
    }
    return false;
}

void Library::displayDetails()
{
    cout << "\nBooks in Library\n";

    for(int i=0;i<count;i++)
        b[i].display();
}

int main()
{
    Library L;

    string t,a;
    int id;

    t="C++"; a="Bjarne"; id=101;
    L.addNewBook(t,a,id);

    t="DSA"; a="Mark"; id=102;
    L.addNewBook(t,a,id);

    t="OS"; a="Silberschatz"; id=103;
    L.addNewBook(t,a,id);

    t="Networks"; a="Tanenbaum"; id=104;
    L.addNewBook(t,a,id);

    t="Algorithms"; a="CLRS"; id=105;
    L.addNewBook(t,a,id);

    L.displayDetails();

    int removeID=103;

    if(L.removeBooks(removeID))
        cout<<"\nBook removed\n";
    else
        cout<<"\nBook not found\n";

    L.displayDetails();

    return 0;
}
