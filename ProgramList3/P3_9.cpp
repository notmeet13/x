/*WAC++P to create class Max with data member’s num_1 and num_2. Member function are input(), display(), largest(). (* Nesting of member functions: A member function can be called by using its name inside another member function of the same class. This is known as nesting of member function.)*/
#include <iostream>
using namespace std;
class Max {
private:
    int num_1;
    int num_2;
public:
    // Input function to get values for num_1 and num_2
    void input() {
        cout << "Enter the first number: ";
        cin >> num_1;
        cout << "Enter the second number: ";
        cin >> num_2;
    }
    // Display function to show the values of num_1 and num_2
    void display() {
        cout << "Number 1: " << num_1 << endl;
        cout << "Number 2: " << num_2 << endl;
    }
    // Find the largest number among num_1 and num_2
    void largest() {
        int max_num = (num_1 > num_2) ? num_1 : num_2;
        cout << "The largest number is: " << max_num << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to create class Max with data member’s num_1 and num_2. Member function are input(), display(), largest(). (* Nesting of member functions: A member function can be called by using its name inside another member function of the same class. This is known as nesting of member function.)"<<endl;
    Max maxObject;
    // Call the input function to get values
    maxObject.input();
    // Call the display function to show the entered values
    maxObject.display();
    // Call the largest function to find and display the largest number
    maxObject.largest();
    return 0;
}