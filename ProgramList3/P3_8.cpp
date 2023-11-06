/*WAC++P to demonstrate use of class account member is acc_no, balance, branch_code. (*Declare variable in public section and initialize the value with object name and display outside the class).*/
#include <iostream>
using namespace std;
class Account {
public:
    int acc_no;
    double balance;
    int branch_code;
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to demonstrate use of class account member is acc_no, balance, branch_code. (*Declare variable in public section and initialize the value with object name and display outside the class)."<<endl;
    Account account1;  // Create an Account object
    // Initialize the public data members using the object
    account1.acc_no = 12345;
    account1.balance = 1000.0;
    account1.branch_code = 789;
    // Display the account information
    cout << "Account Number: " << account1.acc_no << endl;
    cout << "Balance: $" << account1.balance << endl;
    cout << "Branch Code: " << account1.branch_code << endl;
    return 0;
}