/*WAC++P to find area of circle using formula pi*r2. Take the value of pi as default argument in function.*/
#include <iostream>
using namespace std;
double areaOfCircle(double radius, double pi = 3.14159265359) {
    return pi * radius * radius;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to find area of circle using formula pi*r2. Take the value of pi as default argument in function."<<endl;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    if (radius < 0) {
        cout << "Radius cannot be negative." << endl;
    } else {
        double area = areaOfCircle(radius);
        cout << "Area of the circle with radius " << radius << " is " << area << endl;
    }
    return 0;
}