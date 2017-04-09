#ifndef INVOICE_H
#define INVOICE_H

using namespace std;

class Invoice {
    private:
        int quant;
        
        float prize;
        
        string num, 
               descript;
        
    public:
        Invoice(string, int, float, string);
        
        void setNum(string);
        string getNum();
        
        void setQuant(int);
        int getQuant();
        
        void setPrize(float);
        float getPrize();
        
        void setDescript(string descript);
        string getDescript();
        
        float getInvoiceAmount();
        
        string toString();
};

#endif //INVOICE_H
