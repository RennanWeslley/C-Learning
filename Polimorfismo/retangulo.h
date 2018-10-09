#ifndef RETANGULO_H
#define RETANGULO_H

#include "geometria.h"

class Retangulo : public Geometria {
    public:
        Retangulo(float base, float altura) {
            this->base = base;
            this->altura = altura;
        }

        void calcArea() {
            area = base*altura;
        }

    private:
        float base, altura;
};

#endif // RETANGULO_H
