/*WAC++P to read a text file and copy it to another text file.*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to read a text file and copy it to another text file."<<endl;
    ifstream inputFile("test.txt");
    ofstream outputFile("output.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open the input file for reading." << endl;
        return 1;
    }
    if (!outputFile.is_open()) {
        cerr << "Failed to open the output file for writing." << endl;
        return 1;
    }
    char ch;
    while (inputFile.get(ch)) {
        outputFile.put(ch);
    }
    inputFile.close();
    outputFile.close();
    cout << "File copied successfully." << endl;
    return 0;
}