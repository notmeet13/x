/*WAC++P to demonstrate use of Returning Object as argument.*/
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int age;
    Student(const string& n, int a) : name(n), age(a) {}
    // Function to create a new Student object with modified age
    Student increaseAge(int years) {
        return Student(name, age + years);
    }
};
// Function that takes a Student object as an argument
void displayStudentInfo(const Student& student) {
    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << " years old" << endl;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of Returning Object as argument."<<endl;
    Student student1("John", 20);
    // Call the increaseAge function and return a new Student object
    Student student2 = student1.increaseAge(2);
    // Call the displayStudentInfo function and pass the returned object as an argument
    displayStudentInfo(student2);
    return 0;
}