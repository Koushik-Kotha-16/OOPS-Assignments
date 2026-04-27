#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    string str;

    cout<<"Enter a string: ";
    getline(cin, str);

    int len = str.length();
    cout<<"Length of string = "<<len<<endl;

    ofstream fout("STRING.TXT");
    fout << str;
    fout.close();

    ifstream fin("STRING.TXT");
    char ch;

    cout<<"\nCharacters from file:\n";
    while(fin.get(ch))
    {
        cout<<ch;
    }

    fin.close();

    return 0;
}