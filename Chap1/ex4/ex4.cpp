/*
    Input N. Calculate the summation of first N odd numbers starting from 1.
*/

#include <iostream>
using namespace std;


int summation_of_odd_numbers(int N) {
    /*
        Input N, return the sum of N odd numbers.
        e.g. if N = 4, it will return 1 + 3 + 5 + 7
    */

    int sum = 0;

    for (int i = 1; (i + 1) / 2 <= N; i += 2) {
        sum += i;
    }

    return sum;
}


int main() {
    cout << "Input an N: ";

    int N;

    cin >> N;

    cout << "The answer is: " << summation_of_odd_numbers(N) << endl;
}