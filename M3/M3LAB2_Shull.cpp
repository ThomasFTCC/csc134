/*
csc 134
M3LAB2 - Letter Grade
Thomas Shull
2/26/2024
*/

#include <iostream>
using namespace std;

/*
A: 90 - 100
B: 80 - 89
C: 70 - 79
D: 60 - 69
F: 0 - 59
*/

int main(){
    //var
    double grade;

    //Ask for number grade
    cout << "What is your number grade, up to two decimals?: ";
    cin >> grade;
    cout << endl;


    //If statment for gradeing
    if (grade >= 90.00){
        cout << "Grade: A" << endl;
    } else if(grade >= 80.00 && grade < 90){
        cout << "Grade: B" << endl;
    } else if( grade >= 70.00 && grade < 80){
        cout << "Grade: C" << endl;
    } else if(grade >= 60.00 && grade < 70){
        cout << "Grade: D" << endl;
    } else if(grade < 60){
        cout << "Grade: F" << endl;
    } else {
        cout << "Please input a valid number." <<  endl;
    }

    return 0;
}

