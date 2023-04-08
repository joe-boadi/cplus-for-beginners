#include <iostream>
// using various mathematical methods: import cmath --> #include <cmath>
#include <cmath>

using namespace std;

int main(){
    double x = 12.5;
    double y = 25.0;
    double z = 35.7;

    // uses double for most calculations an accurate approximation.
    // various calculations *, +, -, /, % etc..
    double a = y / z;

    // for modulo , use "fmod"(read more)
    //returns the remainder.
    double b = fmod(z, y); 

    //nature of approximation.
    double min_value = min(a, b);
    double max_value = max(a, b);

    //rounding number[high or low].
    double floor_value = floor(z);
    double ceil_value = ceil(x);

    // rounding number
    double round_number = round(floor_value + ceil_value);
    //power of numbers.
    //floor_value raised to num3.
    double pow_number = pow(floor_value, 3);
    // squareRoot of numbers.
    double square_root =sqrt(x);

    cout << "x/y = "<<  a <<"\nfmod(z,y): " << b << endl;
    cout << "min value & max value respectively " << min_value << max_value << endl;
    cout<< "check out other operations in the source code." << endl;
}

