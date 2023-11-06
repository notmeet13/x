/*WAC++P to demonstrate use of Single Inheritance.*/
#include <iostream>
using namespace std;
// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
    void stop() {
        cout << "Vehicle stopped" << endl;
    }
};
// Derived class
class Car : public Vehicle {
public:
    void accelerate() {
        cout << "Car is accelerating" << endl;
    }
    void brake() {
        cout << "Car is braking" << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Single Inheritance."<<endl;
    Car myCar;
    myCar.start();
    myCar.accelerate();
    myCar.brake();
    myCar.stop();
    return 0;
}