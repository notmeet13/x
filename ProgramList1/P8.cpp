/*WAC++P to find compound interest.*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to find compound interest."<<endl;
    double p, r, t, ci; //principal amount, rate of interest and time in years
    cout << "Enter the principal amount: ";
    cin >> p;
    cout << "\nEnter the annual interest rate (in decimal): ";
    cin >> r;
    cout << "\nEnter the number of years: ";
    cin >> t;
    ci = p * pow(1 + r / 100, t) - p;
    cout << "\nThe compound interest is: $" << fixed << setprecision(2) << ci;
    return 0;
}