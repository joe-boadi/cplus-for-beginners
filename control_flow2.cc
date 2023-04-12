#include <iostream>
using namespace std;

int main(){
    
    cout << "Hi , guess you love C++?" << endl;
    string userAns;
    getline(std::cin, userAns);

    cout << "and love programming?" << endl;
    string userAns2;
    getline(std::cin, userAns2);

    if (userAns == "yes" && userAns2 == "yes") {
        cout << "Welcome to C++!, happy coding" << endl;
    }else if(userAns == "yes" && userAns2 != "yes"){
        cout << "Just C++?!" << endl;

    }else if(userAns != "yes" && userAns2 == "yes"){
        cout << "You got no love for C++?!" << endl;
    }else{
        cout << "You love none!" << endl;
    }

    return 0;
}