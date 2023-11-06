/*WAC++P to demonstrate use of class employee. (*Variable declares in private section & method declaration in public)*/
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeId;
    double salary;
public:
    // Constructor to initialize the employee's data
    Employee(const string& n, int id, double sal) {
        name = n;
        employeeId = id;
        salary = sal;
    }
    // Method to display employee information
    void displayEmployee() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Salary: $" << salary << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of class employee. (*Variable declares in private section & method declaration in public)"<<endl;
    // Create an Employee object and provide initial data
    Employee employee1("John Doe", 1001, 50000.0);
    // Display employee information using the class method
    employee1.displayEmployee();
    return 0;
}