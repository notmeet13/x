/*WAC++P to find factorial of the given number with the use of function.*/
#include <iostream>
using namespace std;
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to find factorial of the given number with the use of function."<<endl;
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long result = factorial(number);
        cout << "Factorial of " << number << " is " << result << endl;
    }
    return 0;
}