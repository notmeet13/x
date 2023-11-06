/*WAC++P to demonstrate use of Static Member Function.*/
#include <iostream>
using namespace std;
class MathOperations {
public:
    // Static member function to find the maximum of two numbers
    static int max(int a, int b) {
        return (a > b) ? a : b;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Static Member Function."<<endl;
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    // Call the static member function to find the maximum
    int maximum = MathOperations::max(num1, num2);
    std::cout << "Maximum number is: " << maximum << std::endl;
    return 0;
}