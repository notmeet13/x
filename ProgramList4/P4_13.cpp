/*WAC++P to demonstrate use of Destructor.*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int* dynamicArray;
public:
    // Constructor
    MyClass() {
        dynamicArray = new int[5]; // Allocate dynamic memory
        std::cout << "Constructor called." << std::endl;
    }
    // Destructor
    ~MyClass() {
        delete[] dynamicArray; // Release dynamic memory
        std::cout << "Destructor called." << std::endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Destructor."<<endl;
    MyClass obj; // Create an object
    // Some operations with the object
    std::cout << "Object is about to go out of scope." << std::endl;
    return 0; // Object goes out of scope at the end of the main function
}