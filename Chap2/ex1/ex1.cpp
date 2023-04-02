/*
    Exercise 1: Switch between temperature (C to F)  - Same as the exercise 1 of chapter 1
    F = 9/5 C + 32
*/

#include <iostream>
using namespace std;


float convert_temperature(int C) {
    /*
        Convert Celsius to Fahrenheit， according to F = 9/5 C + 32
    */
   float F = 9/5 * C + 32;

   return F;
}


int main() {
    cout << "Input a Celsius: ";

    float C;

    cin >> C;

    cout << "The Fahrenheit is: " << convert_temperature(C) << endl;
}

