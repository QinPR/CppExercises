//hailstone sequence
#include <iostream>
using namespace std;
int transfer(int& data);
bool isOdd(int data);
bool isEven(int data);
int main(){
    int data;
    cout << "Enter a number: ";
    cin >> data;
    while(transfer(data) != 0){
        continue;
    }
}

int transfer(int& data){
    if (data == 1){
        return 0;
    } else if (isOdd(data)){   
        cout << data << " is odd, so I multiply by 3 and add 1 to get " << 3 * data + 1 << endl;
        data = 3 * data + 1;
    } else {        
        cout << data << " is even, so I divide it by 2 to get " << data / 2 << endl;
        data = data / 2;
    }
    return 1;
}

bool isOdd(int data){
    if (data%2 == 1){
        return true;
    }
    return false;
}

bool isEven(int data){
    if (data%2 == 0){
        return true;
    }
    return false;
}