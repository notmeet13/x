/*WAC++P to demonstrate Runtime polymorphism code without virtual keyword.*/
#include <iostream>
using namespace std;
class Shape {
public:
    void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate Runtime polymorphism code without virtual keyword."<<endl;
    Shape* shapePtr;
    Circle circle;
    shapePtr = &circle; // Point to a Circle object with a Shape pointer
    shapePtr->draw(); // Calls the base class function, not the derived class
    return 0;
}