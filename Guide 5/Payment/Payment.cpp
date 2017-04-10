#include <sstream>
#include <iomanip>
#include "Payment.h"

void Payment::setPaymentValue(double paymentValue) {
    this->paymentValue = paymentValue;
}

double Payment::getPaymentValue() {
    return paymentValue;
}

void Payment::setEmployeeName(string employeeName) {
    this->employeeName = employeeName;
}

string Payment::getEmployeeName() {
    return employeeName;
}

string Payment::toString() {
    stringstream value;
    value << fixed << setprecision(2) << this->paymentValue;
    
    return "Value...: $ " + value.str() + "\nEmployee: " + employeeName;
}
