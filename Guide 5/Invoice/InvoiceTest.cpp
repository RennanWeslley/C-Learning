#include <iostream>
#include <iomanip>
#include "Invoice.h"

int main() {
    Invoice note("15001", 5, 15.99, "Iron made.");
    
    cout << note.toString() << endl << endl;
    cout << "Invoice value: $ " << fixed << setprecision(2) << note.getInvoiceAmount() << endl << endl;
    
    note.setNum("15006");
    note.setQuant(4);
    note.setPrize(19.99);
    note.setDescript("Stainless steel made.");
    
    cout << "Product: " << note.getNum() << endl << "Amount: " << note.getQuant() << endl << "Prize: $ " 
    << note.getPrize() << endl << "Description: " << note.getDescript() << endl << endl;
    
    cout << "Invoice value: $ " << fixed << setprecision(2) << note.getInvoiceAmount() << endl << endl;
    
    return 0;
}
