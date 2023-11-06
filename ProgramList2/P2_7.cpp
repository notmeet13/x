/*WAC++P that demonstrates use of enum user-defined datatype.*/
#include <iostream>
using namespace std;

// Define an enum for days of the week
enum Days {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    // Declare a variable of the enum type
    Days today = Tuesday;
    cout << "Today is ";
    // Use a switch statement to print the day of the week
    switch (today) {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Unknown";
            break;
    }
    cout << endl;
    return 0;
}