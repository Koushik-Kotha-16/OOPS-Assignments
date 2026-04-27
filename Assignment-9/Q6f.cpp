#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream file("HELLO.TXT", ios::in | ios::out | ios::trunc);

    string str = "HelloWorld";

    for(int i=0; i<str.length(); i++)
    {
        file.put(str[i]);
        cout<<"Position = "<<file.tellp()<<endl;
    }

    file.seekp(5);
    file<<"C++";

    file.close();

    cout<<"\nReplacement done";
    return 0;
}