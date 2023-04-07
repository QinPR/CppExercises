//sum of numbers
#include <iostream>
using namespace std;

int sumOfNumbers(int end);

int main(){
    int end;
    cout << "This program can get the sum of numbers" << endl;
    cout << "Enter the end of the numbers: ";
    cin >> end;
    cout << "The sum of the numbers is: " << sumOfNumbers(end) <<endl;
    return 0;
}

int sumOfNumbers(int end){
    int result = 1;
    for (int i = 2; i <= end; i++){
        result += i;
    }
    return result;
}