/*WAC++P for endl and setw function.*/
#include <iostream>
#include <iomanip> // Required for setw
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P for endl and setw function."<<endl;
    int num1 = 12345;
    double num2 = 9876.54321;
    // Demonstrating std::setw
    cout << "Using setw:" << endl;
    cout << "Number 1: " << setw(10) << num1 << endl; // Set width to 10
    cout << "Number 2: " << setw(10) << num2 << endl; // Set width to 10
    // Demonstrating std::endl
    cout << "\nUsing endl:" << endl;
    cout << "Line 1" << endl;
    cout << "Line 2" << endl;
    cout << "Line 3" << endl;
    return 0;
}