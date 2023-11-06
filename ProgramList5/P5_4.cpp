/*WAC+P to demonstrate order of constructor calls in Multiple Inheritance.*/
#include <iostream>
using namespace std;
// Base class A
class A {
public:
    A() {
        cout << "Constructor of class A" << endl;
    }
};
// Base class B
class B {
public:
    B() {
        cout << "Constructor of class B" << endl;
    }
};
// Derived class C, inheriting from both A and B
class C : public A, public B {
public:
    C() {
        cout << "Constructor of class C" << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate order of constructor calls in Multiple Inheritance."<<endl;
    C objectC;
    return 0;
}