#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <exception>

class ValorMuitoAcimaException : public std::exception {
    public:
        const char* what() const throw() {return "Valor maior ou igual a 1000";};
};

#endif // VALORMUITOACIMAEXCEPTION_H
