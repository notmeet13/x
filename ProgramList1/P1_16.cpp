/*WAC++P to Check Armstrong Number using function.*/
#include<iostream>
#include<cmath>
using namespace std;
void checkArm(int n) {
    int temp = 0, sum = 0;
    while (n != 0) {
        temp = n % 10;
        sum += pow(temp,3);
        n /= 10;
        }
        if ((sum == n)) {
            cout << "The number is an armstrong number." << endl;
        } else {
            cout << "The number is not an armstrong number." << endl;
        }
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to Check Armstrong Number using function."<<endl;
    int num = 0;
    cout << "Enter a positive integer: ";
    cin >> num;
    checkArm(num);
    system("pause");
    return 0;
}