/*WAC++P that declares student structure with data members name, std, percentage. Take value for these data members and display it.*/
#include<iostream>
#include<string.h>
using namespace std;
struct Student {
    string name;
    int std;
    double percentage;
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P that declares student structure with data members name, std, percentage. Take value for these data members and display it."<<endl;
    Student student;
    cout << "Enter student's name: ";
    getline(cin, student.name);
    cout << "Enter student's class (std): ";
    cin >> student.std;
    cout << "Enter student's percentage: ";
    cin >> student.percentage;
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Class (std): " << student.std << endl;
    cout << "Percentage: " << student.percentage << "%" << endl;
    return 0;
}