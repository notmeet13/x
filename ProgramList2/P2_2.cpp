/*WAC++P to access static variable using scope resolution operator with using class.*/
#include <iostream>
using namespace std;
class MyClass {
public:
    static int staticVar; // Static variable
    void printStaticVar() {
        cout << "Static variable from inside the class: " << staticVar << endl;
    }
};
int MyClass::staticVar = 10; // Initialize the static variable
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to access static variable using scope resolution operator with using class."<<endl;
    cout << "Accessing static variable using the class name: " << MyClass::staticVar << endl;
    MyClass obj;
    obj.printStaticVar(); // Accessing static variable from an instance of the class
    return 0;
}