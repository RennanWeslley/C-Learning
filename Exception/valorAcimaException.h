#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <exception>

class ValorAcimaException : public std::exception {
    public:
        const char* what() const throw() {return "Valor maior que 100 e menor que 1000";};
};

#endif // VALORACIMAEXCEPTION_H
