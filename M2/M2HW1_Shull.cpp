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
using namespace std;

//Functions declaration

void askQuestion();
void questionOne();
void questionTwo();
void questionThree();
void questionFour();

int main(){
    //TODO Question 1, question 2, question 3, question 4
    //Question Selection
    askQuestion();

    return 0;
}

//Functions Definitions

//Function to ask which assignment you want to view
void askQuestion(){
    int question = 0;

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
                cout << "---------------------------------------------------------------" << endl;
                askQuestion();
        }
}

//Run the first question's program
void questionOne(){
    cout << "---------------------------------------------------------------" << endl;
    
    //Setting up vars
    string bankUserName;
    double bankBalance = 0;
    double bankDeposit = 0;
    double bankWithdrawl = 0;

    //Get name
    cout << "Username: ";
    cin >> bankUserName;
    cout << endl << "Welcome " + bankUserName + ".";

    //Get account balance
    cout << "What is your account balance?" << endl;
    

    cout << "How much would you like to deposit?" << endl << "Deposit: ";
    cin >>  bankDeposit;
    cout << endl;

}

//Run the second question's program
void questionTwo(){
    cout << "---------------------------------------------------------------" << endl;
    cout << "running question two";
}

//Run the third question's program
void questionThree(){
    cout << "---------------------------------------------------------------" << endl;
    cout << "running question Three";
}

//Run the fourth question's program
void questionFour(){
    cout << "---------------------------------------------------------------" << endl;
    cout << "running question Four";
}