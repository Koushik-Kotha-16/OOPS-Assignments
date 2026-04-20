#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    ofstream fout;          
    fout.open("NUM.TXT");   

    if (!fout) {             
        cout << "Error opening file!";
        return 1;
    }

    for (int i = 1; i <= 200; i++) {
        fout << i << " ";    
    }

    fout.close();           
    cout << "Numbers written to NUM.TXT successfully.";

    return 0;
}