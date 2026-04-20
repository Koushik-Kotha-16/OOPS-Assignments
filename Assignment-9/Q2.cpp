#include<iostream>
#include<fstream>
#include<cctype>
using namespace std;


int countAlpha()
{
    ifstream fin("Notes.txt");
    char ch;
    int count = 0;

    if(!fin)
    {
        cout<<"File not found";
        return 0;
    }

    while(fin.get(ch))
    {
        if(isalpha(ch))
        {
            count++;
        }
    }

    fin.close();
    return count;
}

int main()
{
    int res = countAlpha();
    cout<<"Total alphabets = "<<res;
    return 0;
}