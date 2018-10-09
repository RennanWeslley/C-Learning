#include <iostream>
#include <iomanip>
#include "geometria.h"
#include "triangulo.h"
#include "retangulo.h"
#include "circulo.h"

int main() {
    Geometria *g[3];

    g[0] = new Triangulo(4, 6);
    g[1] = new Retangulo(4, 6);
    g[2] = new Circulo  (5);

    for(int i = 0; i < 3; g[i++]->calcArea());

    for(int i = 0; i < 3;)
        std::cout << "Area: " << g[i++]->getArea() << std::setprecision(2) << std::endl << std::endl;


    return 0;
}
