//meter transfer
#include <iostream>
using namespace std;

double meterToFoot(double m);
double meterToInch(double m);

int main(){
    double m;
    cout << "This program transfer the unit of length." <<endl;
    cout << "Enter the meter: ";
    cin >> m;
    //cout << m << endl;
    cout << "The inch is: " << meterToInch(m) << endl;
    cout << "The foot is: " << meterToFoot(m) << endl;
    return 0;
}

double meterToFoot(double m){
    double foot;
    //cout << m << endl;
    foot = 0.0254 * m;
    //cout << foot << endl;
    return foot;
}

double meterToInch(double m){
    double inch;
    inch = 0.0254 * 12 * m;
    //cout << inch << endl;
    return inch;
}