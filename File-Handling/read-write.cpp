#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // Open a file
    // ofstream fout;
    // fout.open("file.txt");
    // fout<< "File is Open";
    // fout.close();
       ifstream fin;
    fin.open("file.txt");
    char c;
    c = fin.get();
    while(!fin.eof()){
        cout << c;
        fin >> c;
    }
    fin.close();
    return 0;
}