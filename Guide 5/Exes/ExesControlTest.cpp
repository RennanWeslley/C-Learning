#include <iostream>
#include <iomanip>
#include "ExesControl.h"

int main() {
    Exes exes_1,
         exes_2;
         
    ExesControl exesControl;
    
    exes_1.setValue(50.00);
    exes_1.setExesType("I dunno");
    
    exes_2.setValue(70.99);
    exes_2.setExesType("I really dunno");
    
    cout << exes_1.toString() << endl << endl;
    cout << exes_2.toString() << endl << endl;
    
    exesControl.setExes(exes_1);
    exesControl.setExes(exes_2);
    
    cout << exesControl.toString();
    
    cout << "--------------------------------" << endl;
    cout << "Exes Total Value: $ " << fixed << setprecision(2) << exesControl.computeTotalExes() << endl;
    cout << "Searching Type \"I dunno\": "; exesControl.shareType("I dunno")? cout << "True" << endl : cout << "False" << endl;
    cout << "Searching Type \"I know\".: "; exesControl.shareType("I know")? cout << "True" << endl : cout << "False" << endl;
    cout << "--------------------------------" << endl << endl;
    
    return 0;
}
