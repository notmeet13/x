/*WAC++P to enter number and cost of a class "item" using getdata() and displaydata(). Write getdata() function outside the class item.*/
#include <iostream>
using namespace std;
class Item {
private:
    int number;
    double cost;
public:
    void displaydata() {
        cout << "Item Number: " << number << endl;
        cout << "Item Cost: $" << cost << endl;
    }
    void setNumber(int n) {
        number = n;
    }
    void setCost(double c) {
        cost = c;
    }
};
// Define the getdata() function outside the class
void getdata(Item &item) {
    int n;
    double c;
    cout << "Enter item number: ";
    cin >> n;
    cout << "Enter item cost: $";
    cin >> c;
    item.setNumber(n);
    item.setCost(c);
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to enter number and cost of a class 'item' using getdata() and displaydata(). Write getdata() function outside the class item."<<endl;
    Item item1;
    // Call the getdata() function to set the data for item1
    getdata(item1);
    // Call the displaydata() function to display the item information
    cout << "Item Information:" << endl;
    item1.displaydata();
    return 0;
}