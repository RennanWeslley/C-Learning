#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "geometria.h"

class Triangulo : public Geometria {
    public:
        Triangulo(float base, float altura) {
            this->base = base;
            this->altura = altura;
        }

        void calcArea() {
            area = base*altura/2;
        }

    private:
        float base, altura;
};

#endif // TRIANGULO_H
