#ifndef PAYMENTCONTROL_H
#define PAYMENTCONTROL_H

#include "Payment.h"
#include <vector>

class PaymentControl {
    private:
        vector<Payment> payments;
        
    public:
        void setPayments(Payment);
        double computePaymentsTotalValue();
        bool shareEmployee(string);
        
        string toString();
};

#endif //PAYMENTCONTROL_H
