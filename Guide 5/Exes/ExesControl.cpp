#include <string>
#include "ExesControl.h"

void ExesControl::setExes(Exes exes) {
    this->exes.push_back(exes);
}

double ExesControl::computeTotalExes() {
    double soma = 0.0;
    
    for(int i = 0; i < exes.size(); i++)
        soma += exes[i].getValue();
    
    return soma;
}

bool ExesControl::shareType(string exesType) {
    for(int i = 0; i < exes.size(); i++)
        if(!(exes[i].getExesType().compare(exesType)))
            return true;
            
    return false;
}

string ExesControl::toString() {
    string show;
    
    for(int i = 0; i < exes.size(); i++) 
        show += exes[i].toString() + "\n\n";
    
    return "Total Exes: \n\n" + show;
}
