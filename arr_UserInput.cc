#include <iostream>
#include <cmath>

using namespace std;

int main() {

    string favorite[4] = {};
    favorite[3] = "code";
    favorite[1] = "music";

    cout << "fill the array ->  ";
    getline(cin, favorite[0]);
    //getline(cin, favorite[1]);
    getline(cin, favorite[2]);

    cout << favorite[0] << endl;
    cout << favorite[1] << endl;
    cout << favorite[2] << endl;
    cout << favorite[3] << endl;

    return 0;
};