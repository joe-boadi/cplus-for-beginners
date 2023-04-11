#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n[5];

    for(int i = 0; i < 5; i++){
        n[i] = i + 5;
    }

    cout << "index " << setw(13) << "value" << endl;

    for (int j = 0; j < 5; j++){  //setw - set width to display
        cout <<setw(7) << j << setw(13) << n[j] << endl;   
    }

    return 0;
    
}