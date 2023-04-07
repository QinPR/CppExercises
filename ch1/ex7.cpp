#include <iostream>
using namespace std;

const int SENTINEL = -1;

int main(){
    cout << "This program returns the average" << endl;
    cout << "Use " << SENTINEL << " to signal the end." << endl;
    int total = 0;
    int count = 0;
    while (true) {
        int value;
        cout << ":";
        cin >> value;        
        if (value == SENTINEL){
            break;
        }
        total += value;
        count ++;
    }
    cout << "The average number is: " << total/count << endl;
    return 0;
}