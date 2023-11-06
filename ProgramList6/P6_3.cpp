/*Write a Program to read a text file and count number of characters in it.*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : Write a Program to read a text file and count number of characters in it."<<endl;
    ifstream inputFile("test.txt");
    if (!inputFile.is_open()) {
        cerr << "Failed to open the file for reading." << endl;
        return 1;
    }
    int characterCount = 0;
    char ch;
    while (inputFile.get(ch)) {
        characterCount++;
    }
    inputFile.close();
    cout << "Number of characters in the file: " << characterCount << endl;
    return 0;
}