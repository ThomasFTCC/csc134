/*
csc 134
M3T1 - Area
Thomas Shull
2/19/2024
*/

#include <iostream>
using namespace std;

int main(){
    //vars
    double lengthOne;
    double widthOne;
    double areaOne;
    double lengthTwo;
    double widthTwo;
    double areaTwo;

    //Ask
    cout << "Length and width of first rectangle seperated by a space: ";
    cin >> lengthOne >> widthOne;
    cout << endl << "Length and width of first rectangle seperated by a space: ";
    cin >> lengthTwo >> widthTwo;

    //Math
    areaOne = lengthOne*widthOne;
    areaTwo = lengthTwo*widthTwo;

    //Output
    cout << "Area of rectangle one is " << areaOne << endl;
    cout << "Area of rectangle two is " << areaTwo << endl;
}