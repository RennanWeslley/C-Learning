#include <iostream>
#include <iomanip>
#include "PaymentControl.h"

int main() {
    Payment payment_1,
            payment_2;
            
    PaymentControl payments;
    
    payment_1.setPaymentValue(6550.90);
    payment_1.setEmployeeName("Some One");
    
    payment_2.setPaymentValue(10000);
    payment_2.setEmployeeName("Any Body");
    
    cout << payment_1.toString() << endl << endl;
    cout << payment_2.toString() << endl << endl;
    
    payments.setPayments(payment_1);
    payments.setPayments(payment_2);
    
    cout << "+++++++++++++++++++++++++++++++++++++" << endl << endl;
    cout << payments.toString();
    cout << "+++++++++++++++++++++++++++++++++++++" << endl << endl;
    
    cout << "Total Payments Value: $ " << fixed << setprecision(2) << payments.computePaymentsTotalValue() << endl << endl;
    
    cout << "-------------------------------------" << endl;
    cout << "Sharing employee \"Some One\".: "; payments.shareEmployee("Some One")? cout << "True" << endl : cout << "False" << endl;
    cout << "Sharing employee \"Some Body\": "; payments.shareEmployee("Some Body")? cout << "True" << endl : cout << "False" << endl;
    cout << "-------------------------------------" << endl << endl;
    
    return 0;
}
