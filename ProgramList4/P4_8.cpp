/*WAC++P to demonstrate use of Friend class.*/
#include <iostream>
using namespace std;
class B; // Forward declaration
class A {
    int dataA;
public:
    A(int val) : dataA(val) {}
    friend class B; // Class B is a friend of class A
};
class B {
public:
    void displayDataA(const A& objA) {
        cout << "Data from class A: " << objA.dataA << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Friend class."<<endl;
    A objA(36);
    B objB;
    objB.displayDataA(objA); // Class B can access and display dataA from class A
    return 0;
}