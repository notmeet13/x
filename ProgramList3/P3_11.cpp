/*Create class product. Data members are product_id, product_name, unit_price. Member functions are getData(). [Getting input from user and assigning values to data members. ] and putData() [Display the product information.]. Call both member function for two objects.*/
#include <iostream>
#include <string>
using namespace std;
class Product {
private:
    int product_id;
    string product_name;
    double unit_price;
public:
    void getData() {
        cout << "Enter product ID: ";
        cin >> product_id;
        cin.ignore(); // Clear the input buffer
        cout << "Enter product name: ";
        getline(cin, product_name);
        cout << "Enter unit price: ";
        cin >> unit_price;
    }
    void putData() {
        cout << "Product ID: " << product_id << endl;
        cout << "Product Name: " << product_name << endl;
        cout << "Unit Price: $" << unit_price << endl;
    }
};
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : Create class product. Data members are product_id, product_name, unit_price. Member functions are getData(). [Getting input from user and assigning values to data members. ] and putData() [Display the product information.]. Call both member function for two objects."<<endl;
    Product product1, product2;
    cout << "Enter information for Product 1:" << endl;
    product1.getData();
    cout << "Enter information for Product 2:" << endl;
    product2.getData();
    cout << "Product 1 Information:" << endl;
    product1.putData();
    cout << "Product 2 Information:" << endl;
    product2.putData();
    return 0;
}