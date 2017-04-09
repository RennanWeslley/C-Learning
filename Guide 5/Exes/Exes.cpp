#include <sstream>
#include <iomanip>
#include "Exes.h"

void Exes::setValue(double value) {
    this->value = value;
}

double Exes::getValue() {
    return value;
}

void Exes::setExesType(string exesType) {
    this->exesType = exesType;
}

string Exes::getExesType() {
    return exesType;
}

string Exes::toString() {
    stringstream value;
    value << fixed << setprecision(2) << this->value;
    
    return "Value: $ " + value.str() + "\nType.: " + exesType;
}
