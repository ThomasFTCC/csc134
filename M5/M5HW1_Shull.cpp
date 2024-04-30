/*
csc 134
M5HW1 - Functions in Use
Thomas Shull
4/7/2024
*/

#include <iostream>
using namespace std;

void questionSelection();
void q1();
void q2();
void q3();
void q4();
void q5();

int main(){
    questionSelection();
}

void questionSelection(){ // select question from prompt
    cout << "Select what question you would like to see with the corresponding number." << endl;
    cout << "\n1.Rainfall\n2.Volume\n3.Roman Numeral\n4.Geometry Calculator\n5.Distance Traveled\n\n6.Exit Program" <<endl;
    int selection = 0;
    cout << "\nView Question:";
    cin >> selection;

    // call selected question
    switch(selection){
        case 1:
        q1();
        break;

        case 2:
        q2();
        break;

        case 3:
        q3();
        break;

        case 4:
        q4();
        break;

        case 5:
        q5();
        break;
    }

}
// QUESTION 1
void q1(){
    cout << "Question 1:" << endl;

}
// QUESTION 2
void q2(){
    cout << "Question 2:" << endl;
}

void q3(){
    cout << "Question 3:" << endl;
}

void q4(){
    cout << "Question 4:" << endl;
}

void q5(){
    cout << "Question 5:" << endl;
}