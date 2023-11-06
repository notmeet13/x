/*WAC++P using array of objects to compare SPI of 10 different students and print whose SPI is highest.*/
#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    float spi;
    Student(){
    }
    Student(const string& n, float s) : name(n), spi(s) {}
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P using array of objects to compare SPI of 10 different students and print whose SPI is highest."<<endl;
    Student students[10];
    int highestIndex = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter student " << i + 1 << " name: ";
        cin >> students[i].name;
        cout << "Enter SPI for " << students[i].name << ": ";
        cin >> students[i].spi;
        if (students[i].spi > students[highestIndex].spi) {
            highestIndex = i;
        }
    }
    cout << "Student with the highest SPI is: " << students[highestIndex].name << " with SPI " << students[highestIndex].spi << endl;
    return 0;
}