#include <iostream>
#include "testaValidaNum.h"
#include "valorMuitoAcimaException.h"
#include "valorAcimaException.h"
#include "valorAbaixoException.h"

int main() {
    TestaValidaNum *t = new TestaValidaNum();
    
    try{
        t->validaNum(1000);
    }
    catch(const ValorAbaixoException &vab) {
        std::cout << vab.what() << std::endl;
        return -1;
    }
    catch(const ValorAcimaException &va) {
        std::cout << va.what() << std::endl;
        return -2;
    }
    catch(const ValorMuitoAcimaException &vma) {
        std::cout << vma.what() << std::endl;
        return -3;
    }
    
    return 0;
}
