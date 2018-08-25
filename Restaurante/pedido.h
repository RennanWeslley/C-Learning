#ifndef PEDIDO_H
#define PEDIDO_H

using namespace std;

class Pedido {
    private:
        int num, qtd;
        string des;
        double preco;
        
    public:
        Pedido() {
            num = 0;
            qtd = 0;
            des = "";
            preco = 0;
        }
        
        Pedido(int num, int qtd, string des, double preco) {
            this->num   = num;
            this->qtd   = qtd;
            this->des   = des;
            this->preco = preco;
        }
        
        int getQtd() {
            return qtd;
        }
        
        double getPreco() {
            return preco;
        }
};

#endif //PEDIDO_H
