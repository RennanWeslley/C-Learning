#ifndef RESTAURANTE_H
#define RESTAURANTE_H

#include "mesa.h"

class Restaurante {
    private:
        Mesa mesas[6];
        
    public:
        Restaurante() {
            for(int i = 0; i < 6; mesas[i++] = Mesa());
        }
        
        void adcionaAoPedido(Pedido p, int pos) {
            mesas[--pos].adcionaAoPedido(p);
        }
        
        double calcTotal() {
            double soma = 0;
            
            for(int i = 0; i < 6; soma += mesas[i++].calcTotal());
            
            return soma;
        }
        
        void zeraPedidos() {
            for(int i = 0; i < 6; mesas[i++].zeraPedidos());
        }

        double calcTotalMesa(int pos) {
            return mesas[--pos].calcTotal();
        }
};

#endif //RESTAURANTE_H
