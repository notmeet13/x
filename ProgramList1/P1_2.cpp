/*WAC++P to convert Fahrenheit into Celsius using class.*/
#include <iostream>
using namespace std;
class Temp{
    private:
    double f;
    public:
    void getF(){
        cout<<"Enter temperature in Fahrenheit : ";
        cin>>f;
    }
    double celsius() {
        return (f - 32) * 5 / 9;
    }
};
int main(){
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to convert Fahrenheit into Celsius using class."<<endl;
    Temp t1;
    t1.getF();
    cout << "Temperature in Celsius is : " << t1.celsius() << endl;
    return 0;
}