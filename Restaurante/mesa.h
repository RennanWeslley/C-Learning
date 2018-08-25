#ifndef MESA_H
#define MESA_H

#include "pedido.h"

class Mesa {
    private:
        Pedido pedidos[8];
        int n;
        
    public:
        Mesa() {
            n = 0;
            for(int i = 0; i < 8; pedidos[i++] = Pedido());
        }
        
        void adcionaAoPedido(Pedido p) {
            if(n > 6) {
                cerr << "Sem mais pedidos disponíveis na Mesa";
                return;
            }
            
            pedidos[n++] = p;
        }
        
        void zeraPedidos() {
            for(int i = 0; i < n; pedidos[i++] = Pedido());
        }
        
        double calcTotal() {
            double soma = 0;
            
            for(int i = 0; i < n; i++) 
                soma += pedidos[i].getQtd() * pedidos[i].getPreco();
            
            return soma;
        }
};

#endif //MESA_H
