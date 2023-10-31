/*WAC++P to Check Whether a Number is Prime or Not using function.*/
#include <iostream>
using namespace std;
bool checkPrime(int n){
    if (n <= 1)
    return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
        }
    return true;
}
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to Check Whether a Number is Prime or Not using function."<<endl;
    int num;
    cout << "Enter the number: ";
    cin >> num;
    bool result=checkPrime(num);
    if(result==true)
    cout<<"The number is prime.";
    else
    cout<<"The number is not prime.";
    return 0;
}