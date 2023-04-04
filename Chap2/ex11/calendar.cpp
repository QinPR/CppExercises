#include "calendar.h"

/*
    Returns the days in a particular month (in a particular year).
*/
int daysInMonth (int year, MONTH month) {
    switch (month) {
        case JANUARARY: return 31;
        case FEBRUARY: {
            if (isLeapYear(year)) {
                return 29;
            } else {
                return 28;
            }
        };
        case MARCH: return 31;
        case APRIL: return 30;
        case MAY: return 31;
        case JUNE: return 30;
        case JULY: return 31;
        case AUGUST: return 31;
        case SEPTEMBER: return 30;
        case OCTOBER: return 31;
        case NOVEMBER: return 30;
        case DECEMBER: return 31;
        default: {
            cout << "NOT DEFINED";
            return -1;
        }
    }
}


/*
    return whether a year is a leap year.
*/
bool isLeapYear(int year) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            return true;
        }
    } else if (year % 4 == 0) {
        return true;
    }
    return false;
}


/*
    return the string name of a month
*/
string monthToString(MONTH month) {
    switch (month) {
        case JANUARARY: return "JANUARARY";
        case FEBRUARY: return "FEBRUARY";
        case MARCH: return "MARCH";
        case APRIL: return "APRIL";
        case MAY: return "MAY";
        case JUNE: return "JUNE";
        case JULY: return "JULY";
        case AUGUST: return "AUGUST";
        case SEPTEMBER: return "SPETEMBER";
        case OCTOBER: return "OCTOBER";
        case NOVEMBER: return "NOVEMBER";
        case DECEMBER: return "DECEMBER";
        default: return "UNDEFINED MONTH";
    }
    return "UNDEFINED MONTH";
}


int main() {
    cout << "Enter a year: ";

    int year;
    cin >> year;

    enum MONTH month;
	for (month = JANUARARY; month <= DECEMBER; month = (MONTH)(month + 1))  
	{
		cout << monthToString(month) << " has " << daysInMonth(year, month) << " days." << endl;
	}
}