/*
    hailstone sequence
*/


#include <iostream>
using namespace std;


void hailstone_sequence(int n) {
    /*
        Obey the following hailstone sequence rules:
        1. if n == 1, the program stops
        2. if n is a even number, divide it by 2
        3. if n is a odd numebr, multiply it by 3, then add 1.
    */
    while (true) {
        if (n == 1) {
            return;
        } else if (n % 2 == 0) {
            cout << n << " is even, so I divide it by 2 to get " << n / 2 << endl;
            n /= 2;
        } else {
            cout << n << " is odd, so I multiply it by 3 and add 1 to get " << n * 3 + 1 << endl;
            n = n * 3 + 1;
        }
    }
}


int main() {

    cout << "Enter a number: ";

    int number;
    cin >> number;
    hailstone_sequence(number);
}