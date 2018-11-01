#include <iostream>
#include "medico.h"
#include "oftalmologista.h"
#include "cirurgiao.h"
#include "otorrino.h"
#include "ginecologista.h"

int main() {
    Medico *m[4];
    
    m[0] = new Oftalmologista("Ronaldo", 257.56, 1.90);
    m[1] = new Cirurgiao("Cleonaldo", 70.5, 1.97);
    m[2] = new Otorrino("Joanderson", 80.7, 1.75);
    m[3] = new Ginecologista("Jordy", 35.4, 1.77);
    
    for(int i = 0; i < 4; std::cout << m[i++]->operacao() << std::endl << std::endl);
    
    return 0;
}
