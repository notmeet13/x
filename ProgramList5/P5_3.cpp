/*WAC++P to demonstrate use of Multiple Inheritance.*/
#include <iostream>
using namespace std;
// First base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
    void stop() {
        cout << "Vehicle stopped" << endl;
    }
};
// Second base class
class MusicPlayer {
public:
    void playMusic() {
        cout << "Playing music" << endl;
    }
    void stopMusic() {
        cout << "Music stopped" << endl;
    }
};
// Derived class inheriting from both base classes
class Car : public Vehicle, public MusicPlayer {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
    void park() {
        cout << "Car is parked" << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Multiple Inheritance."<<endl;
    Car myCar;
    myCar.start(); // Inherited from Vehicle
    myCar.playMusic(); // Inherited from MusicPlayer
    myCar.drive(); // Part of Car class
    myCar.park(); // Part of Car class
    myCar.stopMusic(); // Inherited from MusicPlayer
    myCar.stop(); // Inherited from Vehicle
    return 0;
}