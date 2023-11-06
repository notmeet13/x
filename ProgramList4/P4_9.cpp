/*WAC++P to calculate addition of two numbers using Friend function.*/
#include <iostream>
using namespace std;
class Number; // Forward declaration
class Calculator {
public:
    friend int add(const Number& num1, const Number& num2);
};
class Number {
private:
    int value;
public:
    Number(int val) : value(val) {}
    friend int add(const Number& num1, const Number& num2);
};
// Friend function to add two numbers
int add(const Number& num1, const Number& num2) {
    return num1.value + num2.value;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to calculate addition of two numbers using Friend function."<<endl;
    Number number1(5);
    Number number2(7);
    int sum = add(number1, number2);
    cout << "Sum of the two numbers is: " << sum << endl;
    return 0;
}