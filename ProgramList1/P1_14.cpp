/*WAC++P to Check Whether a Number is a Palindrome or Not using function.*/
#include <iostream>
using namespace std;
bool palindrome(int n){
    int r, sum = 0, temp;
    string s;
    while (n != 0) {
        temp = n % 10;
        s += to_string(temp);
        n /= 10;
        }
        for (int i = 0; i <= s.length()/2; ++i) {
        if (s[i] != s[s.length() - i - 1])
        return false;
        }
    return true;
}
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to Check Whether a Number is a Palindrome or Not using function."<<endl;
    cout << "Enter the number: ";
    int num;
    cin >> num;
    bool check = palindrome(num);
    if (check == true)
    cout << "Number is a palindrome.";
    else
    cout << "Number is not a palindrome.";
    return 0;
}