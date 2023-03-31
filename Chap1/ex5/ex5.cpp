/*
    Keep reading user's input into a list, until user input 0
    Print out the biggest number in list.
*/


#include <iostream>
using namespace std;


void find_biggest_game() {
    /*
        Output the basic info of game,
        Keep reading user's input until he/she inputs 0.
        Print the biggest input.
    */

    cout << "This program finds the largest integer in a list. Enter 0 to signal the end of the list." << endl;

    float biggest_num = 0;
    float input_num;
    while (1) {
        cout << "? ";
        cin >> input_num;
        if (input_num == 0) {
            break;
        }
        if (input_num > biggest_num) {
            biggest_num = input_num;
        }
    }

    cout << "The largest value was " << biggest_num << endl;
    
}


int main() {

    find_biggest_game();

}