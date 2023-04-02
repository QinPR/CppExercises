/*
    Find the perfect numbers, whose factors' sum equals to the number itself.
*/


#include <iostream>
using namespace std;


const int check_range_lower_bound = 1;
const int check_range_upper_bound = 9999; 


bool isPerfect(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        return true;
    } else {
        return false;
    }
}


int main() {
    cout << "The perfect numbers are: ";
    for (int i = check_range_lower_bound; i <= check_range_upper_bound; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}