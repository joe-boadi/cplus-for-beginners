#include <iostream>
using namespace std;

#define MKSTR(x) #x

int main(){
    // hash "#"
    // caUses a replacement text token to be
    // changed to a string surrouned with qoutes.
    cout << MKSTR(Trail succcessful!) << endl;
    return 0;
}