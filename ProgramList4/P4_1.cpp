/*WAC++P that create a class – ‘Employee’ that has data members emp_id & emp_name and member function are getdata() [to input data] & putdata() [to output data]. Write a main function to create emp, an array of Empoyee objects. Accept and display the details of at least 10 employees.*/
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    int emp_id;
    string emp_name;
public:
    void getdata() {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cin.ignore(); // Clear the input buffer
        cout << "Enter Employee Name: ";
        getline(cin, emp_name);
    }
    void putdata() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P that create a class – ‘Employee’ that has data members emp_id & emp_name and member function are getdata() [to input data] & putdata() [to output data]. Write a main function to create emp, an array of Empoyee objects. Accept and display the details of at least 10 employees."<<endl;
    const int numEmployees = 10;
    Employee employees[numEmployees];
    cout << "Enter details for at least 10 employees:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << " details:" << endl;
        employees[i].getdata();
    }
    cout << "Employee Details:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << i + 1 << " information:" << endl;
        employees[i].putdata();
        cout << endl;
    }
    return 0;
}