#ifndef TESTAVALIDANUM_H
#define TESTAVALIDANUM_H

#include "valorMuitoAcimaException.h"
#include "valorAcimaException.h"
#include "valorAbaixoException.h"

class TestaValidaNum {
    public:
        void validaNum(int num) {
            if(num <= 0)
                throw ValorAbaixoException();
            else if(num > 100 && num < 1000)
                throw ValorAcimaException();
            else if(num >= 1000)
                throw ValorMuitoAcimaException();
        }
};

#endif //TESTAVALIDANUM_H
