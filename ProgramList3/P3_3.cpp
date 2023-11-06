/*WAC++P to declare structure of Employee with data members like emp_name, emp_code, emp_salary, emp_branch and also display contents/values of member variables.*/
#include <iostream>
#include <string>
using namespace std;
struct Employee {
    string emp_name;
    int emp_code;
    double emp_salary;
    string emp_branch;
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to declare structure of Employee with data members like emp_name, emp_code, emp_salary, emp_branch and also display contents/values of member variables."<<endl;
    Employee employee;
    cout << "Enter employee's name: ";
    getline(cin, employee.emp_name);
    cout << "Enter employee's code: ";
    cin >> employee.emp_code;
    cout << "Enter employee's salary: ";
    cin >> employee.emp_salary;
    cin.ignore();  // Consume the newline character left by cin
    cout << "Enter employee's branch: ";
    getline(cin, employee.emp_branch);
    cout << "\nEmployee Information:" << endl;
    cout << "Name: " << employee.emp_name << endl;
    cout << "Employee Code: " << employee.emp_code << endl;
    cout << "Salary: $" << employee.emp_salary << endl;
    cout << "Branch: " << employee.emp_branch << endl;
    return 0;
}