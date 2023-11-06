/*WAC++P to demonstrate use of Function Overloading.*/
#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}
// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}
// Function to add two doubles
double add(double a, double b) {
    return a + b;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Function Overloading."<<endl;
    int result1, result2;
    double result3;
    // Call the first add function with two integers
    result1 = add(5, 3);
    cout << "Result of adding two integers: " << result1 << endl;
    // Call the second add function with three integers
    result2 = add(8, 4, 2);
    cout << "Result of adding three integers: " << result2 << endl;
    // Call the third add function with two doubles
    result3 = add(3.5, 2.5);
    cout << "Result of adding two doubles: " << result3 << endl;
    return 0;
}