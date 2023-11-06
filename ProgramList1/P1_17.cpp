/*WAC++P For Fibonacci Number using function.*/
#include <iostream>
using namespace std;
void printFibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P For Fibonacci Number using function."<<endl;
    int n;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> n;
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printFibonacci(n);
    }
    system("pause");
    return 0;
}