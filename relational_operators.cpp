#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    a = 21;
    b = 10;

    if(a == b){
        cout<< "a is equal to b"<< endl;
    }else{
        cout<< "a is not equal to b"<< endl;
    }

    if(a < b){
        cout<< "a is less than b"<< endl;
    }else{
        cout<< "a is not less than b"<< endl;
    }

    if(a > b){
        cout<< "a is greater than b"<< endl;
    }else{
        cout<< "a is not greater than b"<< endl;
    }

    a = 5;
    b = 7;
    if(a<=b){
        cout<< "a is less or equal to b"<< endl;
    }
    if( b >= a ){
        cout<< "b is greter or equal to a"<< endl;
    }
    return 0;
}