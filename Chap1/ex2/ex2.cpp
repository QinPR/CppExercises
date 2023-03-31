/*
    Convert meter to inch and foot
*/


#include <iostream>
using namespace std;


float meter2inch(float meter) {
    /*
        convert meter to inch, according to 1 inch = 0.0254 meter.
    */

   float inch = meter / 0.0254;

   return inch;
}


float meter2foot(float meter) {
    /*
        convert meter to inch first, then convert inch to foot according to 1 foot = 12 inch.
    */

   float inch = meter2inch(meter);

   float foot = inch / 12;

   return foot;
}


int main() {

    cout << "Input a meter: ";

    float meter;
    
    cin >> meter;

    cout << "In inch: " << meter2inch(meter) << endl;
    cout << "In foot: " << meter2foot(meter) << endl;
}