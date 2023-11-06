/*WAC++P to define a function outside the class using scope resolution operator.*/
#include <iostream>
using namespace std;
// Class definition
class MyClass {
public:
    void printMessage(); // Declaration of the member function
};
// Definition of the member function outside the class
void MyClass::printMessage() {
    cout << "Hello from MyClass!" << endl;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to define a function outside the class using scope resolution operator."<<endl;
    MyClass obj;
    obj.printMessage(); // Calling the member function
    return 0;
}