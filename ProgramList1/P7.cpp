/*WAC++P to find simple interest.*/
#include <iostream>
using namespace std;
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to find simple interest."<<endl;
    int p, r, t;
    float SI;
    cout << "Enter Principal Amount: ";
    cin >> p;
    cout << "\nEnter Rate of Interest(in decimal): ";
    cin >> r;
    cout << "\nEnter Time in Years: ";
    cin >> t;
    SI = (p * r * t) / 100;
    cout << "\nThe Simple Interest is :"<<SI;
    return 0;
}