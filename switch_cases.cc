#include <iostream>
#include <string>

using namespace std;

string color(int SomeColor){

    string theColor;
    // Basic priniciple of SWITCH Statements.
    switch (SomeColor) {

    case 1:
        theColor = "Green";
        break;

    case 2:
        theColor = "Yellow";
        break;

    case 3:
        theColor = "Red";
        break;

    case 4:
        theColor = "Blue";
        break;
    case 5:
        theColor = "Magenta";
    
    default:
        theColor = "Invalid";
    }

    //cout << theColor << endl;
    return theColor;
};


int main(){

    cout << color(2) << endl; // pass argument to view color.

    return 0;
};