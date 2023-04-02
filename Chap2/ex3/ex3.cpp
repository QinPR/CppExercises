/*
    Round the float number to the nearest int. e.g. 4.9999 will be rounded to 5. 4.49 will be rounded to 4.
*/


#include <iostream>
using namespace std;


int roundToNearestInt(float x) {
    int x_int = x;     // only take the integer part of x
    float remain = x - x_int;

    if (remain >= 0.5) {    
        return x_int + 1;
    } else {
        return x_int;
    }
}


int main() {
    cout << "Please input an integer: ";

    float input_int;
    cin >> input_int;

    cout << "Output: " << roundToNearestInt(input_int) << endl;
}