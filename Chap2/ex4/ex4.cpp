/* 
    calculating the windchill according to the formulation: 35.74 + 0.6215t - 35.75v^0.16 + 0.4275*t*v^0.16
*/


#include <iostream>
#include <cmath>
using namespace std;


void error(string msg) {
    cerr << msg << endl;
    exit(EXIT_FAILURE);
}


int roundToNearestInt(float x) {
    int x_int = x;     // only take the integer part of x
    float remain = x - x_int;

    if (remain >= 0.5) {    
        return x_int + 1;
    } else {
        return x_int;
    }
}


float windChill(bool is_wind, float temp, float wind_speed) {
    if (!is_wind) {
        return temp;
    } else {
        if (temp > 40) {
            error("Temp is over 40 and the windChill is undefined.");
        }
        else {
            return 35.74 + 0.6215*temp - 35.75*pow(wind_speed,0.16) + 0.4275*temp*pow(wind_speed,0.16);
        }
    }
}


int main() {
    /*
        Draw the table of windchill
    */
    // draw the first line.
    cout << "Calm ";
    for (int temp = 40; temp >= -45; temp -= 5){
        cout << temp << " ";
    }
    cout << endl;

    // draw the body
    for (int wind = 5; wind <= 60; wind += 5) {
        cout << wind << " ";
        for (int temp = 40; temp >= -45; temp -= 5){
            cout << roundToNearestInt(windChill(true, temp, wind)) << " ";
        }
        cout << endl;
    }
}