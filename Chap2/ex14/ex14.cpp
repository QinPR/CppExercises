/*
    Calculate the PI using Monte Carlo integration
*/


#include <iostream>
#include <cmath>
using namespace std;


const double TOTAL_ESTIMATE_TIME = 10000;


bool is_on_circle() {
    /*
        Randomly generate a position, and judge whether it is on the circle.
    */
    double double_x = rand();
    double double_y = rand();
    double rand_max_double = RAND_MAX;
    double x = double_x / rand_max_double * 2 - 1;
    double y = double_y / rand_max_double * 2 - 1;

    if ((pow(x, 2) + pow(y, 2)) < 1) {
        return true;
    }
    return false;   
}


double estimate_PI(double total_num) {
    double num_on_circle = 0;
    for (int i = 0; i < total_num; i++) {
        if (is_on_circle()) {
            num_on_circle += 1;
        }
    }
    double PI = num_on_circle / total_num * 4;
    return PI;
}


int main() {
    cout << "The estimated PI is: " << estimate_PI(TOTAL_ESTIMATE_TIME) << endl;
}


