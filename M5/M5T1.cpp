/*
csc 134
M5T1 - intro to functions
Thomas Shull
3/18/24
*/

#include <iostream>
using namespace std;

//Function Prototypes
void say_hello();
int give_the_answer();
int double_a_number(int num);

int main(){
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;
    //Double the answer
    int two_times = double_a_number(7);
    cout << "Here's another number: " << two_times << endl;
    return 0;
}

void say_hello(){
    cout << "Hi from say_hello()" << endl;
    return;
}

int give_the_answer(){
    return 42;
}

int double_a_number(int num){
    int new_num = num *2;
    return new_num;
}