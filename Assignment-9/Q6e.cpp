#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("data.txt");
    fout<<"Hello\nWorld\nFile Handling";
    fout.close();

    ifstream fin("data.txt");
    char ch;

    fin.seekg(10); 
    cout<<"Current position = "<<fin.tellg()<<endl;

    cout<<"\nRemaining content:\n";
    while(fin.get(ch))
        cout<<ch;

    fin.close();
    return 0;
}