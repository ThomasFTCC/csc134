/*
csc 134
M2HW1 - Homework
Thomas Shull
2/14/24
*/

/*This program includes the ability to choose which of the four questions to view rather than putting each question in its own file. 
I did this to challenge myself a bit(I was bored) and to work ahead. I used the textbook and W3 schools for refrence on the things that we 
haven't gone over in class yet. If gradewise you would rather have it turned in individuality please email me at shullt6371@student.faytechcc.edu. */

//I got a inconsistant bug where the program would repeat its inputs. I believe its with the git software as it is impossible for me to reproduce

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
    //TODO Question 1, question 2, question 3, question 4
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
    cout << "Account Balance: \t$" << (bankBalance + bankDeposit - bankWithdrawl) << endl;

    askReturn();

}

//Run the second question's program
void questionTwo(){
    cout << "/////////////////////////////////////////////////////////////////" << endl;
    cout << "running question two";
}

//Run the third question's program
void questionThree(){
    cout << "/////////////////////////////////////////////////////////////////" << endl;
    cout << "running question Three";
}

//Run the fourth question's program
void questionFour(){
    cout << "/////////////////////////////////////////////////////////////////" << endl;
    cout << "running question Four";
}

//Return to menu
void askReturn(){
    cout << endl << "/////////////////////////////////////////////////////////////////" << endl;
    
    string askReturnAnswer;
    cout << endl << "Type 'Return' to return to the main page" << endl;
    cin >> askReturnAnswer;

    if (askReturnAnswer == "Return"){
        cout << endl << "/////////////////////////////////////////////////////////////////" << endl;
        cout << endl;
        askQuestion();
    }

}