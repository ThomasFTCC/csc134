//CSC 134
//M4Lab1 - Draw Asterisks
// Thomas Shull
// 3/6/2024

using namespace std;
#include <iostream>

int main()
{
    //TODO Ask for width and height
    int width = 6;
    int height = 5;
    cout << "Height: ";
    cin >> height;
    cout << endl << "Width: ";
    cin >> width;

    //row aka width
    for (int i = 0; i < width; i++){
        cout << "# ";
    }

    //colum
    for (int i = 0; i < height; i++){
        cout << "# ";
    cout << endl << endl;
    }

    //Both at once
    for (int i=0; i < height; i++){
        for (int j=0; j < width; j++){
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}
