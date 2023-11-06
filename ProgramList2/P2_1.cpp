/*WAC++P to access global variable using scope resolution operator without using class.*/
#include <iostream>
using namespace std;
int globalVariable = 10;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to access global variable using scope resolution operator without using class."<<endl;
    int globalVariable = 20;
    cout << "Local variable: " << globalVariable << endl;
    cout << "Global variable: " << ::globalVariable << endl;
    return 0;
}