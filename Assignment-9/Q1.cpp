#include<iostream>
#include<fstream>
using namespace std;

int main()
{

    ofstream fout("NUM.TXT");
    for(int i=1; i<=200; i++)
    {
        fout << i << " "<<"\n";
    }
    fout.close();

    ifstream fin("NUM.TXT");
    ofstream f1("ODD.TXT");
    ofstream f2("EVEN.TXT");

    int num;

    while(fin >> num)
    {
        if(num % 2 == 0)
            f2 << num << " "<<"\n";
        else
            f1 << num << " "<<"\n";
    }

    fin.close();
    f1.close();
    f2.close();

    int choice;
    cout<<"Enter choice: ";
    cin>>choice;

    ifstream show;

    switch(choice)
    {
        case 1:
            show.open("ODD.TXT");
            cout<<"Odd numbers:\n";
            break;

        case 2:
            show.open("EVEN.TXT");
            cout<<"Even numbers:\n";
            break;

        default:
            cout<<"Invalid choice";
            return 0;
    }

    while(show >> num)
    {
        cout << num << " "<<"\n";
    }

    show.close();

    return 0;
}