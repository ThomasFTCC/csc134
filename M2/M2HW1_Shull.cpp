/*
csc 134
M2HW1 - Homework
Thomas Shull
2/14/24
*/

/*This program includes the ability to choose which of the four questions to view rather than putting each question in its own file. 
I did this to challenge myself a bit(I was bored) and to work ahead. I used the textbook and W3 schools for refrence on the things that we 
haven't gone over in class yet. If gradewise you would rather have it turned in individuality please email me at shullt6371@student.faytechcc.edu. */

#include <iostream>
#include <iomanip>
#include <string>
#include <random>
using namespace std;

//Functions declaration
void askQuestion();
void questionOne();
void questionTwo();
void questionThree();
void questionFour();
void askReturn();

int main(){
    //TODOquestion 4
    //Question Selection
    askQuestion();

    return 0;
}

//Functions Definitions

//Function to ask which assignment you want to view
void askQuestion(){
    int question;
    cout << "Input homework question you would like to view from its corresponding number." << endl << endl;
    cout << "Banking Transaction: \t1" << endl;
    cout << "General Crates: \t2" << endl;
    cout << "Pizza Party: \t\t3" << endl;
    cout << "Cheering Program: \t4" << endl << endl;

    cout << "Question: ";
    cin >> question;

    if (question == 1){ //Question 1 - Banking Transaction
         questionOne();
    }   
        else if(question == 2){ //Question 2 - General Crates
            questionTwo();
    }   
        else if(question == 3){ //Question 3 - Pizza Party
            questionThree();
    }
        else if(question == 4){//Question 4 - Cheering Program
            questionFour();
    }
        else {
            cout << "Not a valid input. Please input a 1, 2, 3, or 4." << endl;
            cout << "/////////////////////////////////////////////////////////////////" << endl;
            askQuestion();
    }
}

//Run the first question's program
void questionOne(){
    cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
    
    //Setting up vars
    string bankUserName;
    double bankBalance = 0;
    double bankDeposit = 0;
    double bankWithdrawl = 0;
    long int bankRandomNum;

    cout << fixed << setprecision(2);

    //Get name
    cout << "Username: ";
    cin.ignore();
    getline(cin, bankUserName);
    cout << endl << "Welcome " + bankUserName + ". ";

    //Get account balance
    cout << "What is your account balance?" << endl << "Balance: $";
    cin >> bankBalance;
    cout << endl;
    
    //Get deposit amount
    cout << "How much would you like to deposit?" << endl << "Deposit: $";
    cin >>  bankDeposit;
    cout << endl;

    //Get withdrawl amount
    cout << "How much would you like to withdrawl?" << endl << "Withdrawl: $";
    cin >> bankWithdrawl;
    cout << endl;

    cout << "..........................................................................." << endl;

    //Create random account number
    random_device rd;
    long int min = 100000000;
    long int max = 999999999;      //Had to declare a min and max becuase the 
    uniform_int_distribution<long int> distr(min, max); 
    bankRandomNum = distr(rd);
    

    //Display Infomation
    cout << "User: " << bankUserName << "\t\t" << "Account Number: " <<  bankRandomNum << endl << endl;
    cout << "Account Balance: \t$" << (bankBalance + bankDeposit - bankWithdrawl);

    askReturn();

}

//Run the second question's program
void questionTwo(){
    cout << "/////////////////////////////////////////////////////////////////" << endl << endl;
    //Majority copied from M2LAB1
    //Vars
    double length, width, height;
    double volume;
    double cost;
    double charge;
    double profit;

    //Const Vars
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;
    
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
    cout << "..........................................................................." << endl;
    cout << "Crate Volume:\t\t " << volume << " Cubic Feet" << endl;
    cout << "Production Costs:\t $" << cost << endl;
    cout << "Charge:\t\t\t $" << charge << endl;
    cout << "Profit:\t\t\t $" << profit;

    askReturn();
}

//Run the third question's program
void questionThree(){
    cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
    // Todo If pizza left is less than 0 type message saying so
    //Vars
    int pizzaOrderNum;
    int pizzaSlicesPer;
    int pizzaVisitors;

    //Const
    int PIZZA_PER_VISITOR = 3;

    //Ask input
    cout << "How many pizzas are you ordering?" << endl << "Pizzas: ";
    cin >> pizzaOrderNum;
    cout << endl << "How many slices per pizza?" << endl << "Slices: ";
    cin >> pizzaSlicesPer;
    cout << endl << "How many guests will be attending?" << endl << "Guests: ";
    cin >> pizzaVisitors;

    cout << "..........................................................................." << endl << endl;
    int pizzaLeft = (pizzaOrderNum*pizzaSlicesPer)/(pizzaVisitors*PIZZA_PER_VISITOR);
    if (pizzaLeft >=0){
        cout << "There will be " << pizzaLeft << " slices of pizza left";
    }
    else {
        cout << "There will not be enough pizza for everyone!";
    }

    askReturn();
}

//Run the fourth question's program
void questionFour(){
    cout << "/////////////////////////////////////////////////////////////////" << endl;
    cout << "running question Four";
}

//Return to menu
void askReturn(){
    cout << endl << endl << "/////////////////////////////////////////////////////////////////" << endl;
    
    string askReturnAnswer;
    cout << endl << "Type 'return' to return to the main page" << endl;
    cin >> askReturnAnswer;

    if (askReturnAnswer == "return"){
        cout << endl << "/////////////////////////////////////////////////////////////////" << endl;
        cout << endl;
        askQuestion();
    }

}