#include <iostream>
#include "conta.h"
#include "contaEspecial.h"
#include "saldoNaoDisponivelException.h"

int main() {
    Conta c("Joanderson", 800.3, 15556, 3000);
    ContaEspecial ce("Jordeus", 5000.5, 16445, 150000);
    
    c.definirLimite();
    ce.definirLimite();
    
    c.depositar(500);
    
    try{
        c.sacar(3500);
    }
    catch(SaldoNaoDisponivelException &s) {
        std::cout << "Conta. " << s.what() << std::endl << std::endl;
        return -1;
    }
    
    ce.depositar(700);
    
    try {
        ce.sacar(150701);
    }
    catch(SaldoNaoDisponivelException &s) {
        std::cout << "Conta Especial. " << s.what() << std::endl << std::endl;
        return -2;
    }
    
    std::cout << c.toString()  << std::endl << std::endl;
    std::cout << ce.toString() << std::endl << std::endl;
    
    return 0;
}
