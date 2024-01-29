/* 
CSC 135
M1LAB - Apple Sales
Thomas Shull
1/24/24
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "M1LAB - Apple Sales" <<endl;
    //Simulate selling apples.
    //Setting up vars
    string name = "Thomas";
    int num_apples = 20;
    double price_per_apple = 0.25;

    //Do the calculations
    double total_price = 0;
    // NOTE: math operations are + - * /
    total_price = num_apples * price_per_apple;


    //Print the output
    cout << "Welcome to the " << name << " Apple Orchard" << endl;
    cout << "We have " << num_apples << " apples for sale." << endl;
    cout << "At a cost of $" << price_per_apple << " each." << endl;
    cout << "For a total cost of $" << total_price << endl;
    return 0;
}