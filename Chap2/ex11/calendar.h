#ifndef _calendar_h
#define _calendar_h


#include <iostream>
using namespace std;


enum MONTH {
    JANUARARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
};

/*
    Returns the days in a particular month (in a particular year).
*/
int daysInMonth (int year, MONTH month);


/*
    return whether a year is a leap year.
*/
bool isLeapYear(int year);


/*
    return the string name of a month
*/
string monthToString(MONTH month);



#endif