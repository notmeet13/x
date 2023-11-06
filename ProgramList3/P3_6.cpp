/*WAC++P to create class Shape with public data member’s height & base. Member function are display_shape(). Call member function using object of the class. (* scope resolution operator method define outside the class).*/
#include <iostream>
using namespace std;
class Shape {
public:
    double height;
    double base;
    
    void display_shape(); // Member function declaration
};
// Member function definition using the scope resolution operator ::
void Shape::display_shape() {
    cout << "Height: " << height << " Base: " << base << endl;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to create class Shape with public data members height & base. Member function are display_shape(). Call member function using object of the class. (* scope resolution operator method define outside the class)."<<endl;
    Shape shapeObj;
    
    // Set values for the public data members
    shapeObj.height = 5.0;
    shapeObj.base = 10.0;
    // Call the display_shape() member function to display the values
    shapeObj.display_shape();
    
    return 0;
}