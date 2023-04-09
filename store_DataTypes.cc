#include <iostream>
using namespace std;

int main(){
    // hadling data.
    // array: store more than one element/data.
    string data[] = { "car", "building", "court", "people"};
    //accessing element/data in array , using indexing from count 0.
    cout<< data[0] << " "<< data[1] << " " << data[2] <<endl;
    // looping through the element will be handled later.

    string newData[3] = {};

    //filling up the array.
    newData[0] = "Benz";
    newData[1] = "Honda";
    newData[2] = "Range";

    for(int i = 0; i < 3; i++){
        cout << newData[i] <<endl;
    }

    // print the arr on a line.
    int size = sizeof(newData) / sizeof(newData[0]);
    for(int i = 0; i < size; i++){
        cout << newData[i] << " ";
    }
    
    return 0;
}