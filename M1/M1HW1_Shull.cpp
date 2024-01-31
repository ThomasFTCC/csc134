/* 
CSC 134
M1HW1 - Movie Talk
Thomas Shull
1/31/24
*/

#include <iostream>
using namespace std;

int main()
{
    //Vars
    string movie_name = "The Empire Strikes Back";
    int release_date = 1980;
    double gross_profits_millions = 401.5;

    cout << "The second movie in the Star Wars frnachise, " << movie_name << ", released in " << release_date << " and made around " << gross_profits_millions 
    << " millon dollars in profits" << endl << endl;

    cout << "In the movie, Darth Vader says \"Luke, I am your father\". This is one of the most iconic quotes from the entire series." << endl;
    cout << "I enjoy the movie becuase it is setting up the final battle at the end of the movie that comes after " << movie_name << ". It's intresting seeing the heros be on the backfoot the entire movie." << endl;
    cout << "My favorite scene from the movie is when Chiewy had to carry C3-PO on his back after he got dismantled" << endl;
    cout << "That scene shows the risk the heros face going against the empire" << endl;
    return 0;
}