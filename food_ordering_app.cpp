#include <iostream>
using namespace std;

int main(){

    cout << "Make the food order" << endl;
    string question_One;
    getline(cin, question_One); //pasta

    cout << "any drink?" << endl;
    string question_Two;
    getline(cin, question_Two); //apple juice

    // with advance app/project we will need a database.
    // lets stick woth the basics.
    
    cout << "total cost: " << endl;
    int cost; //$ 15.00
    cin >> cost;
    
    cout << "Your order: " << question_One << " + " << question_Two << endl; //Your order: pasta + apple juice
    cout << "total cost: $" << cost << endl; //$ 15.00
    cout << "Thanks for stopping by!" << endl;

    return 0;
};