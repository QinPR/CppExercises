/*
    Prime factorization
*/


#include <iostream>
using namespace std;


bool is_prime(int num) {
    /*
        Judge whether the input num is a prime number or not.
    */
    for (int i = 2; i < num ; i ++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


void prime_factorization(int num) {

    while (!is_prime(num)) {
        for (int i = 2; i < num; i++) {
            if (!is_prime(i)) {
                continue;
            }
            else {
                if (num % i == 0) {
                    cout << i << " x ";
                    num /= i;
                    break;
                }
            }
        }
    }
    if (num != 1) {
        cout << num << endl;
    }

}


int main() {
    cout << "This program factors a number." << endl;
    cout << "Enter number to be factored: ";
    
    int number;
    cin >> number;

    prime_factorization(number);
}