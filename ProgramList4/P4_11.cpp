/*WAC++P to demonstrate use of Parameterized Constructor.*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    // Parameterized constructor
    MyClass(int value) {
        data = value; // Initialize data with the provided value
    }
    void displayData() {
        cout << "Data: " << data << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Parameterized Constructor."<<endl;
    int inputValue;
    cout << "Enter an integer value: ";
    cin >> inputValue;
    MyClass obj(inputValue); // Create an object using the parameterized constructor
    obj.displayData(); // Display the data initialized by the parameterized constructor
    return 0;
}