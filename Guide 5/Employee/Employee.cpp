#include <sstream>
#include <iomanip>
#include "Employee.h"

Employee::Employee(string name, string lastName, float salary) {
    setName(name);
    setLastName(lastName);
    setSalary(salary);
}

void Employee::setName(string name) {
    this->name = name;
}

string Employee::getName() {
    return name;
}

void Employee::setLastName(string lastName) {
    this->lastName = lastName;
}

string Employee::getLastName() {
    return lastName;
}

void Employee::setSalary(float salary) {
    if(salary > 0)
        this->salary = salary;
}

float Employee::getSalary() {
    return salary;
}

string Employee::toString() {
    stringstream salary;
    salary << fixed << setprecision(2) << this->salary;
    
    return "Employee: " + name + " " + lastName + "\nSalary: $ " + salary.str();
}
