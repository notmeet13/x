/*WAC++P to demonstrate use of default arguments.*/
#include <iostream>
using namespace std;
// Function with default arguments
int add(int a, int b = 0) {
    return a + b;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // Call the add function with one argument
    int result1 = add(num1);
    cout << "Result (one argument): " << result1 << endl;
    // Call the add function with two arguments
    int result2 = add(num1, num2);
    cout << "Result (two arguments): " << result2 << endl;
    return 0;
}