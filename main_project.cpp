#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){

//  Basic App Requirements
    cout << "Welcome, create account\nChoose username" << endl;
    string username;
    getline(std::cin, username);

    cout<<"Choose Password: "<< username << endl;
    string password;
    getline(std::cin, password);


//  confirming details.
    cout<<"Re-enter info you provided: "<< endl;
    string auth_user;
    getline(std::cin, auth_user);

    string password_auth;
    getline(std::cin, password_auth);

   // User authentication
    while(auth_user != username || password_auth != password){
        cout << "Wrong username or password! Try again" << endl;
        cout << "Username: "<< endl;

        getline(std::cin, auth_user);
        cout << "Password: "<<endl;
        getline(cin, password_auth);
    }

 
    cout << "Welcone To MicroSavings!\nWill you like to deposit now?" << endl;

    string deposit_question;
    getline(cin, deposit_question);

    if(deposit_question == "y" || deposit_question == "yes") {
        cout << "how much?" << endl;
        double cash_deposit;
        cin >> cash_deposit;
        if(cash_deposit < 0.0){
            cout << "invalid input" << endl;
        }else{
            cout << "New balance: $"<< cash_deposit << endl;
            cout << "Thank you, start saving soon." << endl;
        }

    return 0;
}

/*
    For any corrections or additions, do feel free to contribute[Raise an issue, pull that request, fork this repo].
    Meanwhile you can download this for your persual.
    Thank you!
*/