#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "medico.h"

class Ginecologista : public Medico {
    public:
        Ginecologista(std::string nome, double peso, double altura) : Medico(nome, peso, altura) {
            curso = "Ginecologista";
        }
        
        std::string operacao() {
            return "Realizando consulta, ginecologista";
        }
};

#endif //GINECOLOGISTA_H
