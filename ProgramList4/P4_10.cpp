/*WAC++P to demonstrate use of Default Constructor.*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int data;
public:
    // Default constructor
    MyClass() {
        data = 0; // Initialize data to a default value
    }
    void displayData() {
        cout << "Data: " << data << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Default Constructor."<<endl;
    MyClass obj1; // Create an object using the default constructor
    obj1.displayData(); // Display the data initialized by the default constructor
    return 0;
}