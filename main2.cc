#include <iostream>
#include <cmath>
using namespace std;

// check out number_basics and test_and_functions files.
// before going through this.

int main(){

    // basic application.
    string userName = "Orion";

    cout << "Hello " <<userName << endl;
    int amt_of_food = 4;
    int price = 15;

    //  making use of min and max method.
    cout << "you ate " << min(amt_of_food, price)<< " slides of pizza." << endl;
    cout << "It cost you $" << max(amt_of_food, price)<< endl;

    string workout = "push-ups";
    int totalCalories = 150;
    int time = 30;
    cout << "you have done " << workout << " for " << min(totalCalories, time) << " mins."<< endl; 
    cout << "you burnt " << max(totalCalories, time) << " calories today."<< endl;

    return 0;
}