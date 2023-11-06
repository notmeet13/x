/*WAC++P to calculate difference between Manufacture year and expiry year using pass object as function argument.*/
#include <iostream>
using namespace std;
class Product {
public:
    int manufactureYear;
    int expiryYear;
    Product(int manuYear, int expYear) : manufactureYear(manuYear), expiryYear(expYear) {}
};
// Function to calculate the difference between manufacture and expiry years
int calculateYearDifference(const Product& product) {
    return product.expiryYear - product.manufactureYear;
}
int main() {
    cout<<"NAME : MEET MAKADIYA"<<endl;
    cout<<"ERNO : 220130318036"<<endl;
    cout<<"PROBLEM : WAC++P to calculate difference between Manufacture year and expiry year using pass object as function argument."<<endl;
    Product product1(2019, 2024);
    // Call the function and pass the Product object as an argument
    int yearDifference = calculateYearDifference(product1);
    cout << "The difference between manufacture year and expiry year is: " << yearDifference << " years." << endl;
    return 0;
}