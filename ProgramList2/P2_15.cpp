/*WAC++P to calculate square of a given number using inline function.*/
#include <iostream>
using namespace std;
// Inline function to calculate the square of a number
inline double square(double x) {
    return x * x;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    double num;
    cout << "Enter a number: ";
    cin >> num;
    double result = square(num);
    cout << "The square of " << num << " is " << result << endl;
    return 0;
}