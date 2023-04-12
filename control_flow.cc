#include <iostream>
using namespace std;

int main(){
    // manipulate the variable: play with the flow to better understand.
    string variable = "hello world";
    int number = 10;

    if(variable == "Hello world!" && number <= 10){
        cout << "Hello world!" << endl;

    }else if(variable == "Hey" || number >= 11){
        cout << "Hi anyway!" << endl;

    }else{
        cout << "nothing"<< endl;
    }



    return 0;
}