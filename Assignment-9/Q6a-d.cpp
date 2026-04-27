#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;

    ofstream fout("DATA.TXT");
    for(char c='A'; c<='Z'; c++)
    {
        fout << c;
    }
    fout.close();

    fstream file("DATA.TXT", ios::in | ios::out);

    file.seekg(9);
    file.get(ch);
    cout<<"10th character = "<<ch<<endl;

    file.seekp(4);
    file.put('X');

    file.seekg(0, ios::end);
    cout<<"File size = "<<file.tellg()<<endl;

    file.seekg(-1, ios::end);
    file.get(ch);
    cout<<"Last character = "<<ch<<endl;

    file.close();

    return 0;
}