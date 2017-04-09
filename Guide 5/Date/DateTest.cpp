#include <iostream>
#include <iomanip>
#include "Date.h"

int main() {
    Date date(8, 4, 2017);
    
    cout << endl << date.toString() << endl << endl;
    
    date.setDay(31);
    date.setMonth(10);
    date.setYear(2000);
    
    cout << endl << date.toString() << endl << endl;
    
    date.advanceDay();
    date.advanceDay();
    
    cout << endl << "Date: " << date.getMonth() << "/" << date.getDay() << "/" << date.getYear() << "." << endl << endl;
    
    return 0;
}
