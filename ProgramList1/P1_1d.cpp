/*WAC++P to enter radius of a circle and find its diameter, circumference and area.*/
#include<iostream>
using namespace std;
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to enter radius of a circle and find its diameter, circumference and area."<<endl;
    float r;
    cout<<"Enter the radius: ";
    cin>>r;
    cout<<"Diameter = "<<2*r;
    cout<<"\nCircumference = "<<3.14*(2*r);
    cout<<"\nArea = "<<3.14*(r*r);
    return 0;
}