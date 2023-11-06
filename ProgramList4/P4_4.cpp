/*WAC++P to demonstrate use of passing object as an argument.*/
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(const string& n, int a) : name(n), age(a) {}
};
// Function that takes a Student object as an argument
void displayStudentInfo(const Student& student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << " years old" << endl;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of passing object as an argument."<<endl;
    Student student1("John", 20);
    // Call the function and pass the Student object as an argument
    displayStudentInfo(student1);
    return 0;
}