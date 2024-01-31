/* 
CSC 134
M2T2 - Apple Sales
Thomas Shull
1/31/24
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "M2T2 - Apple Sales With Input" <<endl << endl;
    //Simulate selling apples.

    //Setting up vars
    string name;
    int num_apples;
    double price_per_apple;
    double total_price = 0;

    //Ask name and number of apples wanted and apple price
    cout << "Whats your name?" << endl;
    cin >> name;
    cout << "Welcome, " << name << ", to Thomas' Apple Orchard. How many apples are you looking to buy? " << endl;
    cin >> num_apples;
    cout << "How much per apple?" << endl;
    cin >> price_per_apple;
    cout << "You are buying " << num_apples << " apples for $" << price_per_apple << " per apple" << endl << endl;
    cout << "Here is your reciept:" << endl << endl;
   
    //Do the calculations
    total_price = num_apples * price_per_apple;

    //Print Reciept
    cout << "\t Thank you for shopping at Thomas' Apple Orchard" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Customer Name:" << "\t\t" << name << endl << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Number of Apples:" << "\t|" << num_apples << endl;
    cout << "Price Per Apple:" << "\t|" << price_per_apple << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Total: " << "\t\t\t|$" << total_price << endl;

    return 0;
}