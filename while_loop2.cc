#include <iostream>
using namespace std;

int main(){
    //application: userAuth.
    cout<<"Create password"<<endl;
    string password;
    getline(std::cin, password);

    cout <<"Enter the password to confirm" <<endl;
    string i;
    getline(std::cin, i);

    while(i != password){
        cout << "Wrong Password! Try again" <<endl;
        getline(std::cin, i);
    }
    cout << "Great, welcome" << endl;
    return 0;
}