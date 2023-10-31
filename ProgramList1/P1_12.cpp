/*WAC++P To Print Multiplication Table of a Number.*/
#include <iostream>
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P To Print Multiplication Table of a Number."<<endl;
    int num, i, j;
    cout << "Enter the number for multiplication table: ";
    cin >> num;
        for (j = 1; j <= 10; ++j) {
            if (num == 0 || num == 1)
            break;
            else
            cout << num * j << endl;
        }
    return 0;
}