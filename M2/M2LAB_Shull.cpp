/*
csc 134
M2LAB - Crates
Thomas Shull
2/5/24
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Take 1 - just a rectangle
    //Vars
    double length, width, height; //can declare multiple vars in one
    double volume;
    double cost;
    double charge;
    double profit;

    //Const Vars
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    
    //Take mesurment from user input
    cout << "Length: ";
    cin >> length;
    cout << endl << "Width: ";
    cin >> width;
    cout << endl << "Height: ";
    cin >> height;


    //Do Calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    //Print the calculations
    cout << fixed << setprecision(2);
    cout << "----------------------------------------------" << endl;
    cout << "Crate Volume:\t\t " << volume << " Cubic Feet" << endl;
    cout << "Production Costs:\t $" << cost << endl;
    cout << "Charge:\t\t\t $" << charge << endl;
    cout << "Profit:\t\t\t $" << profit << endl;

    cout << endl;
    return 0;
}
    
