/*WAC++P to demonstrate use of constant argument.*/
#include <iostream>
using namespace std;
// Function with constant arguments
int square(const int x) {
    // Attempting to modify x will result in a compilation error
    // x = x * x; // This line will generate an error
    return x * x;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    // Call the square function with a constant argument
    int result = square(num);
    cout << "The square of " << num << " is " << result << endl;
    return 0;
}