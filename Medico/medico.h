#ifndef MEDICO_H
#define MEDICO_H

class Medico {
    public:
        Medico(std::string nome, double peso, double altura) {
            this->nome   = nome;
            this->peso   = peso;
            this->altura = altura;
        }
        
        virtual ~Medico() {}
        
        virtual std::string operacao() = 0;
        
    protected:
        std::string nome, curso;
        double peso, altura;
};


#endif //MEDICO_H
