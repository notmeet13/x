/*WAC++P to Calculate Sum of First n Natural Numbers using function.*/
#include <iostream>
using namespace std;
int sum_of_first_n(int n){
    int i, sum = 0;
    for (i = 1; i <= n; ++i) {
        sum += i;
        }
    return sum;
}
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to Calculate Sum of First n Natural Numbers using function."<<endl;
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << "Sum is :" << sum_of_first_n(num);
    return 0;
}