#include <iostream>

using namespace std;

int main(){
    //working with if statements...
    double priceOfCoffee = 3.00;

    cout<< "Do you want anything"<< endl;
    string resp;
    getline(std::cin, resp);

    cout << "Enter your balance" << endl;
    double balance;
    cin >> balance;

    if(resp == "yes" && balance >= 3.00){
        cout << "You can have your coffee" << endl;
        cout << "new balance: " << balance - priceOfCoffee << endl;

    }else if(resp == "yes" && balance < priceOfCoffee){
        cout << "Insufficient funds, sorry!" << endl;

    }else{
        cout << "Have a good day!" << endl;
    }

    return 0;
}