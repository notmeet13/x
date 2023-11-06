/*WAC++P to create class Distance with private data member’s feet & inches. Member function are get_distance() & display_distance(). Call both member functions using object of the class.*/
#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    float inches;
public:
    void get_distance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void display_distance() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to create class Distance with private data members feet & inches. Member function are get_distance() & display_distance(). Call both member functions using object of the class."<<endl;
    Distance distanceObj;
    // Call the get_distance() member function to input values
    distanceObj.get_distance();
    // Call the display_distance() member function to display the values
    distanceObj.display_distance();
    return 0;
}