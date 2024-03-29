/*
csc 134
M3HW
Thomas Shull
2/26/2024
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
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
    void botEnd();

    //Vars
    string playerName;
    string playerChoice;

    cout << "Hello! My name is Steve. What is your name?\n";
    cin >> playerName;
    cout << "It's nice to meet you " << playerName << "! What would you like to talk about " << playerName << "? Your options are sports, space, or games.\n";
    cin >> playerChoice;
    if (playerChoice == "sports"){ 
        cout << "I don't like sports, I can't even play them since I am a computer" << endl;
        botEnd();
        } else if (playerChoice == "space"){
            cout << "Space is my favorite topic! Would you like to hear a fun fact about space? (yes or no)" << endl;
            cin >> playerChoice;
            if(playerChoice == "yes"){
                cout << "Here you go! The planet Jupiter can fit 1,300 Earths inside of it. Isn't that insane? (yes or no)" << endl;
                cin >> playerChoice;
                if (playerChoice == "yes"){
                    cout << "I'm glad you agree! Come back tomorrow for a new fun fact" << endl;}
                    botEnd();
                } else {
                    cout << "Oh.....ok"<< endl;
                    botEnd();
            }
            
        } else if (playerChoice == "games"){
        cout << "Good choice! What is your favorite game?" << endl;
        cin >> playerChoice;
        cout << playerChoice << " sounds like a fun game! My favorite is Minecraft. Do you like minecraft? (yes or no)" << endl;
            if(playerChoice == "yes"){
                cout << "You have a good taste in games! Well it's time for me to go, goodbye." << endl;
            }
        } else if (playerChoice == "no"){
            cout << "Cringe, goodbye" << endl;
            botEnd();
        } else {
            cout << "Not a valid answer" << endl;
            botAskAgain();
        }

}

void botAskAgain(){ //For chatbot question
        cout << "Im sorry, I don't know anything about that." << endl;
        cout << "Would you like to restart the conversation?" << endl << "yes or no" << endl;
        string botAskAgainAnswer;
        cin >> botAskAgainAnswer;

        if (botAskAgainAnswer == "yes"){
            questionOne();
        } else if(botAskAgainAnswer == "no"){
            askQuestion();
        }else{
            cout << "Not a valid input" << endl;
            botAskAgain();
        }
    }

void botEnd(){ //For chatbot question
    cout << "Would you like to restart the conversation?" << endl << "yes or no" << endl;
        string botEndAnswer;
        cin >> botEndAnswer;

        if (botEndAnswer == "yes"){
            questionOne();
        } else if(botEndAnswer == "no"){
            askQuestion();
        }else{
            cout << "Not a valid input" << endl;
            botEnd();
        }
}

void questionTwo(){ //Reciept
/*todo 
ASk for price of the meal
Ask if dine in or takeaway if dine in add 15% tip
*/ 
    cout << "Thank you for dining with us" << endl;
    cout << "--------------------" << endl;
    // Set up Vars
    int recieptMealType = 0; //"Text to prevent issue";
    // all in dollars except the precent
    double recieptMealPrice = 0;
    double recieptDineInTip;
    double recieptTotal = 0;
    double recieptTipPayed = 0;
    double recieptTax = 0.08;
    double recieptTaxPayed;
    string recieptMealName;

    //Input
    cout << "What was the cost of your meal?\n";
    cin >> recieptMealPrice;
    cout << endl << "Did you dine-in or takeout today? Please type 1 for dine-in or 2 for takeout" << endl;
    cin >> recieptMealType;
    if(recieptMealType != 1 && recieptMealType != 2){
        cout << "Please input a valid meal type" << endl << endl;
        cout << endl << "/////////////////////////////////////////////////////////////////" << endl << endl;
        questionTwo();
    } 
       

    // Do Calculations 
    if (recieptMealType == 1){
        recieptDineInTip = 0.15;
        recieptMealName = "Dine-In";
    } else {
        recieptDineInTip = 0;
        recieptMealName = "Takeout";
    }
    recieptTipPayed = recieptMealPrice * recieptDineInTip;
    recieptTaxPayed = recieptMealPrice * recieptTax;
    recieptTotal = recieptMealPrice + recieptTaxPayed + recieptTipPayed;

    // Print the receipt
    cout << fixed << setprecision(2);
    cout << endl << "--------------------" << endl;

    cout << recieptMealName << ":" << "\t$" << recieptMealPrice << endl;
    cout << "Tax:" << "\t\t$" << recieptTaxPayed << endl;
    cout << "Tip:" << "\t\t$" << recieptTipPayed << endl;
    cout << "--------------------" << endl;
    cout << "Total:" << "\t\t$" << recieptTotal << endl;
}

void questionThree(){   //Adventure game
    void advGameDeath();

    int advChoice;
    cout << "You approach have just taken off in your brand new space ship.\nOn your first flight out of the shipyard you come across a small cluster of asteroids that is not marked on the system map.\nDo you CHECK IT OUT (1) or IGNORE IT (2)." << endl;
    cin >> advChoice;
    if(advChoice == 1){
        cout << "As you get closer to the asteroids you start thinking about how bad of an idea this was. You don't have much practice you aren't able to dodge all of the asteroids and you crash into them." << endl;
        advGameDeath();
    } else if(advChoice == 2){
        cout << "You decide to advoid the asteroids and take a detour.\nYou now have a choice on what to do next. Do you want to GO EXPLORING(1) or GO TRADING(2)" << endl;
        cin >> advChoice;
        if (advChoice == 1){
            cout << "You go and explore the galaxy, making friends and riches as you go.\nThe End" << endl;
        } else if(advChoice == 2){
            cout << "While hauling cargo you are attacked and killed by pirates.\n The End" << endl;
            advGameDeath();
        }
    } else{
        cout << "Your ships computer causes a meltdown and you crashed and died (Please input a valid input when it is presented to prevent future falure)";
        advGameDeath();
    }
}

void advGameDeath(){
    int advChoiceDeath;
    cout << "Return to menu(1) or restart story (2)" << endl;
    cin >> advChoiceDeath;
    if (advChoiceDeath == 1){
        askQuestion();
    } else if(advChoiceDeath == 2){
        questionThree();
    }

}

void questionFour(){ //Math Practice
    int firstNum;
    int secondNum;
    int mathUserAnswer;
    int mathAnswer;
    int mathUserEndInput;

    srand(time(0));
    firstNum = (rand()%9)+1;
    secondNum = (rand()%9)+1;
    mathAnswer = firstNum + secondNum;
    cout << "Math Test:\n" << firstNum << " + " << secondNum << " =" << endl;
    cin >> mathUserAnswer;
    if (mathUserAnswer == mathAnswer){
        cout << endl << "You're right, good job! Would you like to\nTry another: 1\nReturn to menu: 2" << endl;
        cin >> mathUserEndInput;
        if (mathUserEndInput == 1){
            questionFour();
        } else if(mathUserEndInput == 2){
            askQuestion();
        }
    } else if (mathUserAnswer != mathAnswer){
        cout << endl << "That is not right. Would you like to\nTry another: 1\nReturn to menu: 2" << endl;
        cin >> mathUserEndInput;
        if (mathUserEndInput == 1){
            questionFour();
        } else if(mathUserEndInput == 2){
            askQuestion();
        }
    }
}