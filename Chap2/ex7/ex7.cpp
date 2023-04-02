/*
    Approximate the square root.
*/


#include <iostream>
using namespace std;


const float input = 10;


float approximate_sqrt(float x) {
    float g = x / 2;

    while (true) {
        float mean = (g + x/g) / 2;
        if ((mean == g) && (mean == x/g)) {
            break;
        }
        g = mean;
    }

    return g;
}


int main() {
    cout << "The sqrt of " << input << " is: " << approximate_sqrt(input) << endl;
}