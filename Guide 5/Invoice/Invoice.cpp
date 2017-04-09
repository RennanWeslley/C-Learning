#include <sstream>
#include <iomanip>
#include "Invoice.h"

Invoice::Invoice(string num, int quant, float prize, string descript) {
    this->num = num;
    this->quant = quant;
    this->prize = prize;
    this->descript = descript;
}

void Invoice::setNum(string num) {
    this->num = num;
}

string Invoice::getNum() {
    return num;
}

void Invoice::setQuant(int quant) {
    if(quant < 0)
        this->quant = 0;
    else
        this->quant = quant;
}

int Invoice::getQuant() {
    return quant;
}

void Invoice::setPrize(float prize) {
    if(prize < 0)
        this->prize = 0.0;
    else
        this->prize = prize;
}

float Invoice::getPrize() {
    return prize;
}

void Invoice::setDescript(string descript) {
    this->descript = descript;
}

string Invoice::getDescript() {
    return descript;
}

float Invoice::getInvoiceAmount() {
    return quant * prize;
}

string Invoice::toString() {
    stringstream quant,
                 prize;
                 
    quant << this->quant;
    prize << fixed << setprecision(2) << this->prize;
    
    return "Product: " + num + "\nAmount: " + quant.str() + "\nPrize: $ " + prize.str() + "\nDescription: " + descript;  
}
