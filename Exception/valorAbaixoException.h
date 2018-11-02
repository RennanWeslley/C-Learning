#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <exception>

class ValorAbaixoException : public std::exception {
    public:
        const char* what() const throw() {return "Valor menor ou igual a 0.";};
};

#endif // VALORABAIXOEXCEPTION_H
