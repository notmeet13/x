/*WAC++P for setprecision() function.*/
#include <iostream>
#include <iomanip> // Required for setprecision
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    double number = 3.14159265358979323846;
    cout << "Default precision: " << number << endl;
    cout << "Precision set to 2 decimal places: " << fixed << setprecision(2) << number << endl;
    cout << "Precision set to 6 decimal places: " << fixed << setprecision(6) << number << endl;
    cout << "Precision set to 10 decimal places: " << fixed << setprecision(10) << number << endl;
    return 0;
}