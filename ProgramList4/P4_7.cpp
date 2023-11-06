/*WAC++P to demonstrate use of Friend function.*/
#include <iostream>
using namespace std;
class MyClass {
private:
    int privateData;
public:
    MyClass(int data) : privateData(data) {}
    friend void displayPrivateData(const MyClass& obj);
};
// Friend function to display the private data of MyClass
void displayPrivateData(const MyClass& obj) {
    cout << "Private data: " << obj.privateData << endl;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Friend function."<<endl;
    MyClass myObject(42);
    displayPrivateData(myObject); // Call the friend function to display private data
    return 0;
}