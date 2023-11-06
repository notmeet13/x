/*WAC++P to calculate cube of a given number using inline function.*/
#include <iostream>
using namespace std;
// Inline function to calculate the cube of a number
inline double cube(double x) {
    return x * x * x;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double result = cube(num);
    cout << "The cube of " << num << " is " << result << endl;
    return 0;
}