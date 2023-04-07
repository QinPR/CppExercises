// approximate pi value
#include<iostream>
using namespace std;
double piOverFour();
int main(){
    cout << "This program can approximate the pi value" <<endl;
    cout << 4.0 * piOverFour() << endl;
}
double piOverFour(){
    double result=0;
    for(int i = 0; i < 10000; i++){
        if (i%2 == 0){
            result += 1.0/(2*i+1);
        } else {
            result -= 1.0/(2*i+1);
        }
        
    }
    return result;
}