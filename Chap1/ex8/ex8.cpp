/*
    Reverse the digit of the input integer.
*/


#include <iostream>
using namespace std;


void reverse_digit(int input_int) {
    /*
        Reverse the digit of input integer. 
        E.g. if the input integer is 123456789,
        the function will return 987654321.
    */
    cout << "The reversed integer is ";
    while (input_int > 0) {
        cout << input_int % 10;
        input_int /= 10;
    }
    cout << endl;
}


int main() {
    cout << "This program reverses the digits in an integer." << endl;
    cout << "Enter a positive integer: ";

    int input_int;
    cin >> input_int;

    reverse_digit(input_int);
}