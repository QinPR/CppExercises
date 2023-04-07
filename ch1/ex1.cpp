// F to C
#include <iostream>
using namespace std;
int fToC(int C);

int main(){
    int c;
    cout << "This program transfer c to f" << endl;
    cout << "Please enter the centigrade:";
    cin >> c;
    cout << "F is: " << fToC(c) << endl;
    return 0;
}

int fToC(int C){
    int F;
    F = C * 9 / 5 + 32;
    return F;
}