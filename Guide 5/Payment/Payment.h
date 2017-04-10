#ifndef PAYMENT_H
#define PAYMENT_H

using namespace std;

class Payment {
    private:
        double paymentValue;
        string employeeName;
        
    public:
        void setPaymentValue(double);
        double getPaymentValue();
        
        void setEmployeeName(string);
        string getEmployeeName();
        
        string toString();
};

#endif //PAYMENT_H
