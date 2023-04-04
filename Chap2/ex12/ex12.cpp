/*
    RandomAverage: keep generating random numbers and print out the average of them.
*/


#include <iostream>
using namespace std;


double RandomAverage (int times) {
    double sum = 0;
    double random_double;
    double random_max = RAND_MAX;
    for (int i = 0; i < times; i ++) {
        random_double = rand();
        sum += random_double / random_max;
    }
    return sum / times;
}


int main() { 
    cout << "Plear specify the times that generates random numeber: ";
    
    int times;
    cin >> times;
    cout << "After generating " << times << " times, the average of random numbers is: " << RandomAverage(times) << endl;  
}