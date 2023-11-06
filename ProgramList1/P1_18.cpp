/*WAC++P to Calculate the Power of a Number using function.*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to Calculate the Power of a Number using function."<<endl;
    double base, result;
    int exponent;
    cout << "Enter the base number: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    result = pow(base, exponent);
    cout << base << " raised to the power " << exponent << " is " << result << endl;
    return 0;
}