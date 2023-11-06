/*WAC++P for setfill function.*/
#include <iostream>
#include <iomanip> // Required for setfill and setw
using namespace std;
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    int number = 42;
    // Without setfill
    cout << "Without setfill:" << endl;
    cout << setw(10) << number << endl;
    // With setfill
    cout << "With setfill:" << endl;
    cout << setfill('*') << setw(10) << number << endl;
    return 0;
}