/*
    To mimic the half life of atoms
*/


#include <iostream>
using namespace std;


const int ATOMS_NUM = 10000;


bool is_dead() {
    /*
        To judge whether an atom is dead.
    */
    if (rand() < RAND_MAX /2) {
        return true;
    }
    return false;
}


void mimic(int start_num) {
    /*
        Given the number of year and the start number of atoms.
        Print out the number of remaining atoms each year.
    */
    int year = 1;
    int remain_atom = start_num;
    while (true) {
        for (int i = 0; i < start_num; i++){
            if (is_dead()) {
                remain_atom -= 1;
            }
        }
        start_num = remain_atom;
        cout << "There are " << remain_atom << " at the end of year " << year << "." << endl;
        if (remain_atom <= 0) {
            break;
        } else {
            year += 1;
        }
    }
}


int main() {
    mimic(ATOMS_NUM);
}


