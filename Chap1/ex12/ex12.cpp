/*
    Calculate the area of a 1/4 circle, by dividing the 1/4 circle into several rectangle and calculating the summation of rectangles' area.
*/


#include <iostream>
#include <cmath>
using namespace std;


const double R = 2;   // radius of 1/4 circle
const int NUM_RECT = 10000;  // number of ractangles to be divided.
const double width = R / NUM_RECT;


double cal_height(double x) {
    /*
        Given the midpoint of rectangle, calculate the height of it using:
        h = /sqr_root{R^2 - x^2}
    */
    double height = sqrt((pow(R,2.0) - pow(x,2.0)));
    return height;
}


double cal_area() {
    double total_area = 0;
    for (int i = 0; i < NUM_RECT; i++) {
        double x = i * width + width / 2;     // we add a width/2 because we need the midpoint of rectangle.
        double height = cal_height(x);
        total_area += height * width;
    }
    return total_area;
}


int main() {
    cout << "The area of 1/4 circle is " << cal_area() << endl;
}