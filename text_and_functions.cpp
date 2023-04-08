#include <iostream>
using namespace std;

int main(){
    string txt = "I am C++ dev";
    // length of sentence txt.
    double sizeNumber = txt.size(); 

    // looking for a word in the sentence
    int findWord = txt.find("dev", 0);

    // chamging char
    txt[5] = 'B';

    // deleting varaible.
    // txt.clear(); = false.

    cout << txt << endl; 
    cout << "size of sentence is " << sizeNumber << endl;
    cout << "word found at " << findWord << endl;
    return 0;
}