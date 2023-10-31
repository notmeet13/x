/*WAC++P to swap two numbers.*/
#include<iostream>
using namespace std;
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to swap two numbers."<<endl;
    int a,b,temp;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\nThe swapped numbers are : "<<a<<" and "<<b;
    return 0;
}