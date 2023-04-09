#include <iostream>

using namespace std;

int main(){
    // interacting with user.
    cout << "What do you need?"<< endl;
    string userAns;
    getline(std::cin, userAns); // take input and assign to userAns.
    cout << "you need "<< userAns << " surely, you will get." << endl; //purely works with strings
    cout << "how many devices do you need? " << endl;

    //working with interger or numbers.
    int userAns1;
    cin >> userAns1;
    cout << "Good, you will get "<< userAns1 << endl; 
    return 0;
}