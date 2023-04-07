//reverse integer

#include <iostream>
using namespace std;

int reverseInteger(int data);

int main(){
    int data;
    cout << "This program reverse the interger"<< endl;
    cout << "Enter the interger: ";
    cin >> data;
    cout << "The reversed interger is :";
    reverseInteger(data);
    cout << endl;
    return 0;
}

int reverseInteger(int data){
    while(data > 0){
        cout << data % 10;
        data = data / 10;
    }
    return 0;
}
