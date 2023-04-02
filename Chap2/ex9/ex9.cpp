/*
    Implementation of permutation
*/


#include <iostream>
using namespace std;


const int N = 52;
const int K = 2;


int permutation(int n, int k) {
    /*
        The method to optimize the permutation of n! / (n-k)! is simple:
        It only to delete the same term in numerator and denumerator. 
        Therefore, the calculation becomes: n * (n-1) * ... * (n - k + 1), which is easy to be implemented by a for loop.
    */
    int result = 1;
    for (int i = n; i >= n - k + 1; i --) {
        result *= i;
    }
    return result;
}


int main() {
    cout << "P(" << N << ", " << K << ") is: " << permutation(N, K) << endl;
}


