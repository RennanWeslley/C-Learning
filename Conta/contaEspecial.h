#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "conta.h"

class ContaEspecial : public Conta {
    public:
        ContaEspecial(std::string nome, double salario, double numero, double saldo) : Conta(nome, salario, numero, saldo) {}
        
        void definirLimite() {
            limite = 3 * salarioMensal;
        }
};

#endif //CONTAESPECIAL_H
