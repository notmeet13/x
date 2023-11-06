/*WAC++P to demonstrate use of call by reference.*/
#include<iostream>
using namespace std;
void swap(int &,int &);
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P "<<endl;
    int x=1,r=2;
    cout<<"Before Swapping "<<x<<" & "<<r<<endl;
    swap(x,r);
    cout<<"After Swapping "<<x<<" & "<<r<<endl;
}void swap(int &p,int &q){
    int temp = p;
    p=q;
    q=temp;
}