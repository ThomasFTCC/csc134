// CSC 134
// M2T1 - Receipt
// Thomas Shull
// 1/29/24

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    cout << "M2T1" << endl;
    cout << "Thank you for dining with us" << endl;
    cout << "--------------------" << endl;
    // Set up Vars
    string meal = "Value Meal";
    // all in dollars except the precent
    double meal_price = 5.99; //could add input rather than static
    double tax_precent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // Do Calculations
    tax_amount = meal_price * tax_precent;
    total = meal_price + tax_amount;

    // Print the receipt
    // print this once to set the decimals to 2
    cout << fixed << setprecision(2);

    cout << meal << ":" << "\t$" << meal_price << endl;
    cout << "Tax:" << "\t\t$" << tax_amount << endl;
    cout << "--------------------" << endl;
    cout << "Total:" << "\t\t$" << total << endl;
    return 0;
}