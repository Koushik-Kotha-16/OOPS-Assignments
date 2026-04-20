#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("Source.txt");    
    ofstream fout("Target.txt");   

    char ch;

    if(!fin || !fout)
    {
        cout<<"File error";
        return 0;
    }

    while(fin.get(ch)) 
    {
        fout.put(ch);    
    }

    fin.close();
    fout.close();

    cout<<"File copied successfully";
    return 0;
}