#include<iostream>
#include<cstring>
using namespace std;

class STRING
{
    char str[100];

public:
    STRING(char s[] = "")
    {
        strcpy(str, s);
    }

    int operator==(STRING s2)
    {
        if(strcmp(str, s2.str) == 0)
            return 1;
        else
            return 0;
    }

    STRING operator+(STRING s2)
    {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s2.str);
        return temp;
    }

    void show()
    {
        cout << str << endl;
    }
};

int main()
{
    STRING s1("Hello"), s2("World"), s3;

    s3 = s1 + s2;
    s3.show();

    if(s1 == s2)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}