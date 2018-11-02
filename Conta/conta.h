#ifndef CONTA_H
#define CONTA_H

#include <sstream>
#include <iomanip>
#include "iconta.h"

class Conta : public IConta {
    public:
        Conta(std::string nome, double salario, double numero, double saldo) {
            setNome(nome);
            setSalario(salario);
            setNumero(numero);
            setSaldo(saldo);
        }
        
        void setNome(std::string nome) {
            nomeCliente = nome;
        }
        
        std::string get() {
            return nomeCliente;
        }
        
        void setSalario(double salario) {
            salarioMensal = salario;
        }
        
        double getSalario() {
            return salarioMensal;
        }
        
        void setNumero(double numero) {
            numeroConta = numero;
        }
        
        double getNumero() {
            return numeroConta;
        }
        
        void setSaldo(double saldo) {
            this->saldo = saldo;
        }
        
        double getSaldo() {
            return saldo;
        }
        
        void setLimite(double limite) {
            this->limite = limite;
        }
        
        double getLimite() {
            return limite;
        }
        
        void sacar(double valor) {
            saldo -= valor;
        }
        
        void depositar(double valor) {
            saldo += valor;
        }
        
        virtual void definirLimite() {
            limite = 2 * salarioMensal;
        }
        
        std::string toString() {
            std::stringstream salarioM, numeroC, sald, limit;
            
            salarioM << std::fixed << std::setprecision(2) << salarioMensal;
            numeroC  << std::fixed << std::setprecision(2) << numeroConta;
            sald     << std::fixed << std::setprecision(2) << saldo;
            limit    << std::fixed << std::setprecision(2) << limite;
            
            return "Nome: " + nomeCliente + "\nSalario: " + salarioM.str() + "\nNumero: " + numeroC.str() + "\nSaldo: " + sald.str() + "\nLimite: " + limit.str();
        }
        
    protected:
        std::string nomeCliente;
        double salarioMensal, numeroConta, saldo, limite;
};

#endif //CONTA_H
