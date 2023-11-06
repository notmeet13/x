/*WAC++P to demonstrate use of copy constructor.*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    // Parameterized constructor
    MyClass(int value) : data(value) {}
    // Copy constructor
    MyClass(const MyClass& other) : data(other.data) {}
    void displayData() {
        cout << "Data: " << data << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of copy constructor."<<endl;
    // Create an object using the parameterized constructor
    MyClass obj1(36);
    // Create a new object using the copy constructor
    MyClass obj2(obj1);
    cout << "Object 1: ";
    obj1.displayData();
    cout << "Object 2 (copy of Object 1): ";
    obj2.displayData();
    return 0;
}