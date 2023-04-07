// sum of odd numbers
#include <iostream>
using namespace std;

int sumOfOddNumbers(int N);
int main(){
    int N;
    cout << "This program can calculate the sum of odd numbers" << endl;
    cout << "Enter the length: ";
    cin >> N;
    cout << "The sum is: " << sumOfOddNumbers(N) << endl;
    return 0;
}
int sumOfOddNumbers(int N){
    int result = 1;
    for(int i=1; i<N; i++){
        result += i*2 + 1; 
    }
    return result;
}