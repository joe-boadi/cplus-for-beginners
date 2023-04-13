#include <iostream>
using namespace std;
int main(){

   int count = 0;

   while(count < 11){
    // print out even numbers.
    if(count % 2 == 0){
        cout << count << endl;
    }
    count++;
   } 
}