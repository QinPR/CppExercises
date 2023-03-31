/*
    Calculating pi according to rule of Leibniz
*/


#include <iostream>
using namespace std;


double cal_pi(int num_terms) {
    /*
        Given the terms, approximate PI, according to:
        PI/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
    */
    double PI = 0;
    for (int i = 1; i <= num_terms; i++) {
        double double_num = i * 2 - 1;
        if (i % 2 == 1) {
            PI += (1 / double_num) * 4;
        } else {
            PI -= (1 / double_num) * 4;
        }
    }
    return PI;
}


int main() {
    cout << "Input the number of terms: ";

    int num_terms;
    cin >> num_terms;

    cout << "The approximate PI by calculting " << num_terms << " is " << cal_pi(num_terms) << endl;
}