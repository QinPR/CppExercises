/*
    A program of throwing coins until someone betray his/her belief.
*/


#include <iostream>
using namespace std;


const int REQUIRED_HEADS_TIME = 3;


bool throw_head() {
    if (rand() < RAND_MAX / 2) {
        return true;     // head
    } else {
        return false;    // tail
    }
}


void mimic_throwing() {
    int total_times = 0;
    int head_time = 0;
    while (true) {
        if (throw_head()) {
            head_time += 1;
            cout << "heads" << endl;
        } else {
            head_time = 0;
            cout << "tails" << endl;
        }
        total_times += 1;
        if (head_time >= REQUIRED_HEADS_TIME) {
            cout << "It took " << total_times << " flips to get " << REQUIRED_HEADS_TIME << " constructive heads." << endl;
            break;
        }
    }
}


int main() {
    mimic_throwing();
}