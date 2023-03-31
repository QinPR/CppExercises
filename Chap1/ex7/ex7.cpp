/*
    Kepp reading the input of scores, until it reads -1. 
    Print the average score.
*/


#include <iostream>
using namespace std;


const int SENTINEL = -1;


void AverageList(){
    cout << "This program calculate the average of numbers." << endl;

    cout << "Use " << SENTINEL << " to signal the end." << endl;

    double total = 0;

    double num_input = 0;

    while (true) {
        double value;
        cout << " ? ";
        cin >> value;
        if (value == SENTINEL) break;

        num_input += 1;
        total += value;
    }

    float average = total / num_input;

    cout << "the total is " << total << endl;
    cout << "the num is " << num_input << endl;
    cout << "The average is " << average << endl;
}


int main() {

    AverageList();

}