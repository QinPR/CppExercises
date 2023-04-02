/*
    find the prime number
*/


#include <iostream>
using namespace std;


const int search_lower_bound = 1;
const int search_upper_bound = 100;


bool isPrime(int num) {
    for (int i = 2; i < num; i++){
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    cout << "All the prime numbers between " << search_lower_bound << " and " << search_upper_bound << " is:";

    for (int i = search_lower_bound; i <= search_upper_bound; i++) {
        if (isPrime(i)) {
            cout << " " << i;
        }
    }  
    cout << endl;
}