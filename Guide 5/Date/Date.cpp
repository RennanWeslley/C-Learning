#include <sstream>
#include "Date.h"

Date::Date(int day, int month, int year) {
    if((day > 0 && day < 32) && (month > 0 && month < 13) && year > 0) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
}

void Date::setDay(int day) {
    this->day = day;
}

int Date::getDay() {
    return day;
}

void Date::setMonth(int month) {
    this->month = month;
}

int Date::getMonth() {
    return month;   
}

void Date::setYear(int year) {
    this->year = year;
}

int Date::getYear() {
    return year;
}

void Date::advanceDay() {
    if(day == 31)
        day = 1;
    else
        day++;
}

string Date::toString() {
    stringstream day,
                 month,
                 year;
                 
    day << this->day;
    month << this->month;
    year << this->year;
           
    return "Date: " + month.str() + "/" + day.str() + "/" + year.str() + ".";
}
