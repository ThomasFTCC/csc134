// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// declare the variable we need
int choice; 
string cargo; //turn into something that can hold multiple stuff, like a array or something

//Functions
void shipyardEarth;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  

  // ask the question
  cout << "You are on Earth, docked at a spaceport. You could go into orbtit(1), go to the shipyard(2), or go to the market(3)" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You are in orbit." << endl;
  }
  else if (2 == choice) {
  	cout << "You are in the shipyard" << endl;
  }
  else if(3 == choice){
    cout << "You are in the market" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method

void starportEarth(){
    cout << "You are docked at Earth's starport" << endl;
    cout << "Go to market(1)" << endl;
    cout << "Go to shipyard(2)" << endl;
    cout << "Leave starport(3)" << endl;
    cout << "What will you do?: ";
    cin >> choice;

    if (1 == choice){
        marketEarth;
    }else if (2 == choice){
        shipyardEarth;
    }


}

void marketEarth(){
    cout << "You are at Earth's Market.";
    cout << "Check Cargo(1)" << endl;
    cout << "Buy and Sell(2)" << endl;
    cout << "Return to starport(3)" << endl;
    cin >> choice;

    if (1 == choice){
        cout << "You have no cargo" << endl; //add cargo menu
        cout << "Return(1)";
        cin >> choice;

        if (1 == choice){
            marketEarth;
        }
    }
}

void shipyardEarth(){
    cout << "There are no ships for sale"
}