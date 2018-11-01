#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H

#include "medico.h"

class Oftalmologista : public Medico {
    public:
        Oftalmologista(std::string nome, double peso, double altura) : Medico(nome, peso, altura) {
            curso = "Oftalmologista";
        }
        
        std::string operacao() {
            return "Realizando consulta, oftalmologista";
        }
};

#endif // OFTALMOLOGISTA_H
