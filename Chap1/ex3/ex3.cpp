/*
    arithmetic sequence summation
*/


#include <iostream>
using namespace std;


float sequence_summation(float start, float end, int num_of_terms) {
    /*
        Given a arithmetic sequence, returns the summation by:
        (start + end) * num_of_terms / 2.
    */
   float summation = (start + end) * num_of_terms / 2;

   return summation;
}


int main() {
    cout << "The answer is: " << sequence_summation(1, 100, 100) << endl;
}