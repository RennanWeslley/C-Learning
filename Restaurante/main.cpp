#include <iostream>
#include <iomanip>
#include "restaurante.h"

void recebeP(Restaurante *);

int main() {
    Restaurante r = Restaurante();
    
    recebeP(&r);
    
    cout << "Total do restaurante: R$ " << fixed << setprecision(2) << r.calcTotal() << endl;
    
    for(int i = 1; i < 3; i++)
        cout << "Total da mesa " << i << ".....: R$ " << fixed << setprecision(2) << r.calcTotalMesa(i) << endl;
    
    r.zeraPedidos();
    
    return 0;
}

void recebeP(Restaurante *r) {
    int num, qtd;
    string des;
    double preco;
    
    for(int j = 1; j < 3; j++)
        for(int i = 0; i < 2; i++) {
            cout << "Mesa " << j << ":" << endl << (i+1) << "st - Digite o número: ";
            cin >> num;
            cin.ignore();
            
            cout << (i+1) << "st - Digite a quantidade: ";
            cin >> qtd;
            cin.ignore();
            
            cout << (i+1) << "st - Digite uma descrição: ";
            getline(cin, des);
            
            cout << (i+1) << "st - Digite o preço: ";
            cin >> preco;
            cin.ignore();
            
            r->adcionaAoPedido(Pedido(num, qtd, des, preco), j);
            
            cout << endl;
        }
}
