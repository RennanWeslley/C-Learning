#include <string>
#include "PaymentControl.h"

void PaymentControl::setPayments(Payment payment) {
    payments.push_back(payment);
}

double PaymentControl::computePaymentsTotalValue() {
    double soma = 0.0;
    
    for(int i = 0; i < payments.size(); i++)
        soma += payments[i].getPaymentValue();
        
    return soma;
}

bool PaymentControl::shareEmployee(string employee) {
    for(int i = 0; i < payments.size(); i++)
        if(!(payments[i].getEmployeeName().compare(employee)))
            return true;
            
    return false;
}

string PaymentControl::toString() {
    string show;
    
    for(int i = 0; i < payments.size(); i++)
        show += payments[i].toString() + "\n\n";
        
    return "Total Payments:\n\n" + show;
}
