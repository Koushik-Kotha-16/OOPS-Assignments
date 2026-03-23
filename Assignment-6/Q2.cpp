#include <iostream>
using namespace std;

class Book
{
    string title, author;
    int isbn;

public:

    Book()
    {
        title="";
        author="";
        isbn=0;
    }

    Book(string title,string author,int isbn)
    {
        this->title=title;
        this->author=author;
        this->isbn=isbn;
    }

    Book(const Book &b)
    {
        this->title=b.title;
        this->author=b.author;
        this->isbn=b.isbn;
    }

    int getISBN()
    {
        return isbn;
    }

    void display()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"ISBN: "<<isbn<<endl;
        cout<<endl;
    }
};

class Library
{
    Book b[10];
    int count;

public:

    Library()
    {
        count=0;
    }

    bool addNewBook(string title,string author,int isbn)
    {
        b[count]=Book(title,author,isbn);
        count++;
        return true;
    }

    bool removeBooks(int isbn)
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

    void displayDetails()
    {
        cout<<"\nBooks in Library\n";

        for(int i=0;i<count;i++)
            b[i].display();
    }
};

int main()
{
    Library L;

    L.addNewBook("C++","Bjarne",101);
    L.addNewBook("DSA","Mark",102);
    L.addNewBook("OS","Silberschatz",103);
    L.addNewBook("Networks","Tanenbaum",104);
    L.addNewBook("Algorithms","CLRS",105);

    L.displayDetails();

    int id=103;

    if(L.removeBooks(id))
        cout<<"\nBook removed\n";
    else
        cout<<"\nBook not found\n";

    L.displayDetails();

    Book b1("AI","Russell",200);
    Book b2=b1;

    cout<<"\nCopy Constructor Example\n";
    b2.display();

    return 0;
}
