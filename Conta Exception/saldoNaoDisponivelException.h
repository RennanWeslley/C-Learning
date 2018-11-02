#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <exception>

class SaldoNaoDisponivelException : public std::exception {
    public:
        const char* what() const throw() {return "Valor a sacar maior que o saldo disponível.";};
};

#endif //SALDONAODISPONIVELEXCEPTION_H
