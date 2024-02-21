/*
csc 134
M3T3 - RNG
Thomas Shull
2/21/2024
*/

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    cout << "Welcome to the craps table" << endl;
    //Vars
    int roll;
    int dieOne, dieTwo;
    int seed;

    //set random seed
    srand(time(0)); //seed is time in miliseconds


    //roll dice
    dieOne = (rand()%6) +1;
    dieTwo = (rand()%6) +1;

    roll = dieOne + dieTwo;

    //results
    cout << "Your roll was: " << roll << " (" << dieOne << ", " << dieTwo << ")"<< endl;
    if (roll == 7 || roll ==11){
        cout << "You Win" << endl;
    } else if (roll == 2 || roll == 3 || roll == 12){
        cout << "You lose" << endl;
    }
    return 0;
}