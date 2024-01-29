// CSC 134
// M2T1 - Receipt
// Thomas Shull
// 1/29/24

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "M2T1" << endl;
    // Set up Vars
    string meal = "Value Meal";
    // all in dollars except the precent
    double meal_price = 5.99;
    double tax_precent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // Do Calculations

    // Print the receipt
    // TODO , and fix decimals
    cout << meal << ":" << "\t$" << meal_price << endl;
    cout << "Tax:" << "\t\t$" << tax_amount << endl;
    cout << "Total:" << "\t\t$" << total << endl;
    return 0;
}