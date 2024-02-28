/*
csc 134
M3HW
Thomas Shull
2/26/2024
*/

#include <iostream>
using namespace std;

//functions
void askQuestion();
void questionOne();
void questionTwo();
void questionThree();
void questionFour();
void askReturn();

int main(){

    //Ask which question
    askQuestion();
    return 0;
}

void askQuestion(){
    int question;
    cout << "Input homework question you would like to view from its corresponding number." << endl << endl;
    cout << "Chat Bot: \t\t\t1" << endl;
    cout << "Receipt Calculator: \t\t2" << endl;
    cout << "Choose Your Own Adventure: \t3" << endl;
    cout << "Math practice: \t\t\t4" << endl << endl;

    cout << "Question: ";
    cin >> question;

    if (question == 1){ //Question 1 - Chat Bot
        cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
         questionOne();
    }   
        else if(question == 2){ //Question 2 - Receipt Calculator
            cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
            questionTwo();
    }   
        else if(question == 3){ //Question 3 - Choose Your Own Adventure
            cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
            questionThree();
    }
        else if(question == 4){//Question 4 - Math practice
            cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
            questionFour();
    }
        else {
            cout << "Not a valid input. Please input a 1, 2, 3, or 4." << endl;
            cout << endl << "................................................................." << endl << endl;
            askQuestion();
    }
}

void questionOne(){ //chatbot

    void botAskAgain();

    //Vars
    string playerName;
    string playerChoice;

    cout << "Hello! My name is Steve. What is your name?\n";
    cin >> playerName;
    cout << "It's nice to meet you " << playerName << "! What would you like to talk about " << playerName << "? Your options are sports, space, games, or animals.\n";
    cin >> playerChoice;
    if (playerChoice == "sports"){
        cout << 0;
    } else if (playerChoice == "space"){
        cout << 1;
    } else if (playerChoice == "games"){
        cout << 2;
    } else if (playerChoice == "games"){
        cout << 3;
    } else if (playerChoice == "animals"){
        cout << 4;
    } else {
        botAskAgain();
    }

}

void botAskAgain(){
        cout << "Im sorry, I don't know anything about that.";
    }

void questionTwo(){

}

void questionThree(){

}

void questionFour(){

}