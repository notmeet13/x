/*WAC++P to demonstrate use of Multilevel Inheritance.*/
#include <iostream>
using namespace std;
// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
    void sleep() {
        cout << "Animal is sleeping" << endl;
    }
};
// Derived class 1
class Mammal : public Animal {
public:
    void giveBirth() {
        cout << "Mammal gives birth to live young" << endl;
    }
};
// Derived class 2
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Multilevel Inheritance."<<endl;
    Dog myDog;
    myDog.eat();
    myDog.sleep();
    myDog.giveBirth();
    myDog.bark();
    return 0;
}