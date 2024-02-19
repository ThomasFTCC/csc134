#include <iostream>
using namespace std;

// declare the variable we need
int choice; 
string cargo; //turn into something that can hold multiple stuff, like a array or something
string shipUsed;

//Functions
void start();
void shipyardEarth();

int main() {
  // ask the question
  start();

  // finish up
  cout << "Thanks for playing!" << endl;
  return 0;

}

void start(){
    cout << "Welcome to the Earth-Moon system!" << endl;
    cout << "To move around the world type the number next to the option, try it out with the start button!" << endl;
    cout << "Start(1)" << endl ;
    cin >> choice;

    if (1 == choice)}{
        cout << "Where would you like to start?" << endl;
        cout << "Earth Starport(1)" << endl;
        cout << "Earth Space Station(2)" << endl;
        cout << "Moon Starport(3)" << endl;
        cout << "Moon Space Station(4)" << endl;

        cin >> choice;
        if(1==choice){
            starportEarth();
        }else if(2==choice){
            //spacestationEarth
        }else if(3==choice){
            //starportMoon
        }else if(4==choice){
            //spacestationMoon
        }else
    }
}

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