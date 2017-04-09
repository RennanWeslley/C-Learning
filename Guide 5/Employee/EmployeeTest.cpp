#include <iostream>
#include <iomanip>
#include "Employee.h"

float anualSalary(float);
float doMath(float);

int main() {
    Employee employee_1("Any", "Body", 6550.99);
    Employee employee_2("Some", "One", 6000.0);
    
    cout << endl << employee_1.toString() << endl << endl;
    cout << employee_2.toString() << endl << endl;
    
    cout << employee_1.getName() << "'s anual salary: $ " << fixed << setprecision(2) << anualSalary(employee_1.getSalary()) << endl;
    cout << employee_2.getName() << "'s anual salary: $ " << fixed << setprecision(2) << anualSalary(employee_2.getSalary()) << endl << endl;
    
    employee_1.setSalary(doMath(employee_1.getSalary()));
    employee_2.setSalary(doMath(employee_2.getSalary()));
    
    cout << endl << employee_1.toString() << endl << endl;
    cout << employee_2.toString() << endl << endl;
    
    cout << employee_1.getName() << "'s anual salary: $ " << fixed << setprecision(2) << anualSalary(employee_1.getSalary()) << endl;
    cout << employee_2.getName() << "'s anual salary: $ " << fixed << setprecision(2) << anualSalary(employee_2.getSalary()) << endl << endl;
    
    return 0;
}

float anualSalary(float salary) {
    return salary * 12;
}

float doMath(float salary) {
    return salary += salary * 0.10;
}
