#ifndef CIRCULO_H
#define CIRCULO_H

#include <math.h>
#include "geometria.h"

class Circulo : public Geometria {
    public:
        Circulo(float raio) {
            this->raio = raio;
        }

        void calcArea() {
            area = M_PI * pow(raio, 2);
        }

    private:
        float raio;
};

#endif // CIRCULO_H
