/*Writing to a text file test.txt using C++ FileStream Programming.*/
#include <iostream>
#include <fstream>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : Writing to a text file test.txt using C++ FileStream Programming."<<endl;
    // Open the file for writing (this will create the file if it doesn't exist)
    ofstream outputFile("test.txt");
    // Check if the file is open and ready for writing
    if (outputFile.is_open()) {
        // Write data to the file
        outputFile << "Hello, World!" << endl;
        outputFile << "This is a C++ program writing to a text file." << endl;
        // Close the file
        outputFile.close();
        cout << "Data has been written to the file." << endl;
    } else {
        cerr << "Failed to open the file for writing." << endl;
    }
    return 0;
}