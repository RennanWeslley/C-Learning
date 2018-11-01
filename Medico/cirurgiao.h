#ifndef CIRURGIAO_H
#define CIRURGIAO_H

#include "medico.h"

class Cirurgiao : public Medico {
    public:
        Cirurgiao(std::string nome, double peso, double altura) : Medico(nome, peso, altura) {
            curso = "Cirurgiao";
        }
        
        std::string operacao() {
            return "Realizando cirurgia";
        }
};

#endif //CIRURGIAO_H
