/*
csc 134 
M3LAB1 - Choices
Thomas Shull
2/19/2024
*/


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "You are on Earth, docked at a spaceport. You could go into orbtit(1), go to the shipyard(2), or go to the market(3)" << endl;
  cout << "Type 1 or 2: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You are in orbit." << endl;
    cout << "Where do you want to go?" << endl;
    cout << "Earth starport(1)" << endl;
    cout << "Moon's Orbit(2)" << endl;
    cout << "Deep Space(3)" << endl;
    cin >> choice;
    if (1 == choice){
        cout << "You return to the starport and go home to visit friends and family" << endl;

    }else if(2 == choice){
        cout << "You are in orbit of the moon. Where do you want to go" << endl;
        cout << "Moon Starport(1)" << endl;
        cout << "Military Space Station(2)" << endl;
        cin >> choice;
        if (1 == choice){
            cout << "You made it to the moon!" << endl;
        }else if (2==choice){
            cout << "You were shot when you got too close" << endl;
        }

    }else if(3 == choice){
        cout << "You got lost in deep space." << endl;
    }
  }
  else if (2 == choice) {
  	cout << "You are in the shipyard, there is nothing to buy." << endl;
  }
  else if(3 == choice){
    cout << "You are in the market with no cargo to sell." << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method