#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main(){
    cout << "First number: ";
    int first;
    cin >> first;
    if (!cin.fail())
    {
    cout << "Second number: ";
    int second;
    cin >> second;
    if (!cin.fail())
    {
        if (second != 0)
        {
            cout << first % second << endl;
        }
        else
        {
            cout << "Error" << endl;
        }
    }
    else
    {
        cout << "Error" << endl;
    }   
    }
    else
    {
    cout << "Error" << endl;
    }

}