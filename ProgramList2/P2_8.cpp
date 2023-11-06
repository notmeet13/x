/*WAC++P to convert km to cm, meter, inch and feet using manipulators endl, setw, setfill and setprecision.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    double km;
    const double cm_per_meter = 100;
    const double cm_per_inch = 2.54;
    const double cm_per_foot = 30.48;
    cout << "Enter distance in kilometers: ";
    cin >> km;
    double meters = km * cm_per_meter;
    double inches = km * cm_per_meter / cm_per_inch;
    double feet = km * cm_per_meter / cm_per_foot;
    // Using manipulators for formatting
    cout << fixed << setprecision(2); // Set precision to 2 decimal places
    cout << "Distance: " << setw(10) << setfill(' ') << km << " km" << endl;
    cout << "In meters: " << setw(10) << setfill('0') << meters << " m" << endl;
    cout << "In inches: " << setw(10) << setfill('0') << inches << " in" << endl;
    cout << "In feet:   " << setw(10) << setfill('0') << feet << " ft" << endl;
    return 0;
}