#include <iostream>
using namespace std;

/* version 0.1

This program will take an input of a price and a sales tax rate and return the result

*/

int main()
{
    auto price = 0.;
    auto taxRate = 0.; 
    auto taxCost = 0.;
    auto totalPrice = 0.;
    auto taxInput = 0.;
    cout << "Input the price of your item before tax: ";
    cin >> price;
    cout << endl;

    cout << "Input the sales tax rate: ";
    cin >> taxInput;
    cout << endl;

    taxRate = taxInput/100.;
    
    taxCost = price * taxRate;
    totalPrice = price + taxCost;

    cout << "The total cost of your item will be " << totalPrice;

 // This is a test change

}