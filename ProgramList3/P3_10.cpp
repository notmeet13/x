/*WAC++P using class to find maximum number from three numbers.*/
#include <iostream>
using namespace std;
class MaxFinder {
private:
    double num1;
    double num2;
    double num3;
public:
    MaxFinder(double a, double b, double c) {
        num1 = a;
        num2 = b;
        num3 = c;
    }
    double findMax() {
        double max = num1;
        if (num2 > max) {
            max = num2;
        }
        if (num3 > max) {
            max = num3;
        }
        return max;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P using class to find maximum number from three numbers."<<endl;
    double n1, n2, n3;
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
    MaxFinder maxObject(n1, n2, n3);
    double max = maxObject.findMax();
    cout << "The maximum number is: " << max << endl;
    return 0;
}