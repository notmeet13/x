/*WAC++P to create class student with data members name & age. Member function are get_details() and display_details(). Call both member functions using object of the class.*/
#include<iostream>
#include<string.h>
using namespace std;
class Student {
/*private*/    public:
        string name;
        int age;
    public:
        void get_details(){
            cout<<"Enter your good name :)";
            getline(cin, name);
            cout<<"Enter your age :)";
            cin>>age;
        }
        void display_details(){
            cout<<"Your name is ::"<<name<<endl;
            cout<<"Your age is  ::"<<age;
        }
};
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to create class student with data members name & age. Member function are get_details() and display_details(). Call both member functions using object of the class."<<endl;
    Student s1;
//    s1.get_details();
    s1.name="Meet";
    s1.age=17;
    s1.display_details();
    return 0;
}