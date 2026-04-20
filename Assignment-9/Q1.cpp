#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // STEP 1: Write 1 to 200
    ofstream fout("NUM.TXT");
    for(int i=1; i<=200; i++)
    {
        fout << i << " ";
    }
    fout.close();

    return 0;
}