#include <iostream>
#include "conta.h"
#include "contaEspecial.h"

int main() {
    Conta c("Joanderson", 800.3, 15556, 3000);
    ContaEspecial ce("Jordeus", 5000.5, 16445, 150000);
    
    c.definirLimite();
    ce.definirLimite();
    
    c.depositar(500);
    c.sacar(200);
    
    ce.depositar(700);
    ce.sacar(300);
    
    std::cout << c.toString()  << std::endl << std::endl;
    std::cout << ce.toString() << std::endl << std::endl;
    
    return 0;
}
