#ifndef OTORRINO_H
#define OTORRINO_H

#include "medico.h"

class Otorrino : public Medico {
    public:
        Otorrino(std::string nome, double peso, double altura) : Medico(nome, peso, altura) {
            curso = "Otorrino";
        }
        
        std::string operacao() {
            return "Realizando atendimento, otorrino";
        }
};

#endif // OTORRINO_H
