/*WAC++P to overload a function named is “area”.*/
#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159265359;
double area(double side) {
    return side * side;
}
double area(float radius) {
    return PI * pow(radius, 2);
}
double area(double length, double width) {
    return length * width;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to overload a function named is area."<<endl;
    double side = 5.0, radius = 3.0, length = 6.0, width = 4.0;
    cout << "Circle area: " << area(radius) << std::endl;
    cout << "Rectangle area: " << area(length, width) << std::endl;
    cout << "Square area: " << area(side) << std::endl;
    return 0;
}